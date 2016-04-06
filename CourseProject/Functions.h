#pragma once
#include "JsonUtils.h"

namespace CourseProject
{
	using namespace System;
	using namespace System::Text;
	using namespace System::Net;
	using namespace System::Web;
	using namespace System::IO;

	public ref class Functions abstract sealed
	{
	private:
		static String^ API = "https://capi.azurewebsites.net/api";

	public:
		// Need to replace
	/*{
		    "userName": "admin",
			"password" : "secure",
			"confirmPassword" : "secure"
	}*/
		[SerializableAttribute]
		ref class MyData
		{
		public:
			unsigned ID;
			String^ Name;
		};
		[SerializableAttribute]
		ref class LoginData
		{
		public:
			String^ userName;
			String^ password;
			String^ confirmPassword;
		};
		static MyData^ data = gcnew MyData(); // Json struct instance
		static LoginData^ login = gcnew LoginData();
		
		static void InitializeFunctions()
		{
			//TODO
		}

		static String^ Base64Encode(String^ text)
		{
			auto plainTextBytes = Encoding::UTF8->GetBytes(text);
			return Convert::ToBase64String(plainTextBytes);
		}

		static String^ Base64Decode(String^ base64)
		{
			auto base64EncodedBytes = Convert::FromBase64String(base64);
			return Encoding::UTF8->GetString(base64EncodedBytes);
		}

		/*static String^ SerializationTest()
		{
			String^ result = Base64Encode("Test Test Test");
			return result;
		}*/

		generic <class T>
			static String^ HttpPost(T data, String^ route)
			{
				try {
					String^ url = API + route;
					HttpWebRequest^ httpRequest = (HttpWebRequest^)WebRequest::Create(url);
					httpRequest->Method = "POST";
					httpRequest->ContentType = "application/json";
					String^ json = JsonUtils::Serialize(data);
					array<Byte>^ postBytes = Encoding::UTF8->GetBytes(json);
					httpRequest->ContentLength = postBytes->Length;
					Stream^ stream = httpRequest->GetRequestStream();
					stream->Write(postBytes, 0, postBytes->Length);
					stream->Close();

					HttpWebResponse^ httpResponse = (HttpWebResponse^)httpRequest->GetResponse();
					StreamReader^ sr = gcnew StreamReader(httpResponse->GetResponseStream(), Encoding::Default);
					String^ result = sr->ReadToEnd();
					httpResponse->Close();
					
					return result;
				}
				catch (WebException^ e) {
					return e->Message;
				}
			}

				static String^ HttpGet(String^ params, String^ route)
				{
					try {
						String^ url = API + route + "/" + params;
						HttpWebRequest^ httpRequest = (HttpWebRequest^)WebRequest::Create(url);
						httpRequest->Method = "GET";
						httpRequest->Accept = "application/json";

						HttpWebResponse^ httpResponse = (HttpWebResponse^)httpRequest->GetResponse();
						StreamReader^ sr = gcnew StreamReader(httpResponse->GetResponseStream(), Encoding::Default);
						String^ result = sr->ReadToEnd();
						httpResponse->Close();

						return result;
					}
					catch (WebException^ e) {
						return e->Message;
					}
				}

					static String^ AuthPost(String^ username, String^ password)
					{
						try {
							String^ grant_type = "password";
							String^ data = "grant_type=" + grant_type + "&username=" + username + "&password=" + password;
							String^ route = "/auth";
							String^ url = API + route;
							HttpWebRequest^ httpRequest = (HttpWebRequest^)WebRequest::Create(url);
							httpRequest->Method = "POST";
							httpRequest->ContentType = "application/x-www-form-urlencoded";
							array<Byte>^ postBytes = Encoding::UTF8->GetBytes(data);
							httpRequest->ContentLength = postBytes->Length;
							Stream^ stream = httpRequest->GetRequestStream();
							stream->Write(postBytes, 0, postBytes->Length);
							stream->Close();

							HttpWebResponse^ httpResponse = (HttpWebResponse^)httpRequest->GetResponse();
							StreamReader^ sr = gcnew StreamReader(httpResponse->GetResponseStream(), Encoding::Default);
							String^ result = sr->ReadToEnd();
							httpResponse->Close();

							return result;
						}
						catch (WebException^ e) {
							return e->Message;
						}
					}
	};
}

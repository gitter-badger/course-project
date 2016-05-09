#pragma once
namespace CourseProject
{
	using namespace System;
	using namespace System::IO;
	using namespace Newtonsoft::Json;

	public ref class JsonUtils abstract sealed
	{
		public:
		generic <class T>
		static T Deserialize(String^ filename);
		generic <class T>
		static void Serialize(T value, String^ filename);

};
}



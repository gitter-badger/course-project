#pragma once
namespace CourseProject
{
	using namespace System;
	using namespace Newtonsoft::Json;

	public ref class JsonUtils abstract sealed
	{
	public:
		generic <class T>
		static T Deserialize(String^ json)
		{
			auto deserializedObject = JsonConvert::DeserializeObject<T>(json, (JsonSerializerSettings ^)nullptr);
			return deserializedObject;
		}
		generic <class T>
		static String^ Serialize(T value)
		{
			return JsonConvert::SerializeObject(value);
		}
	};
}



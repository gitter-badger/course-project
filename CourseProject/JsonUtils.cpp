#pragma once
#include "JsonUtils.h"

namespace CourseProject
{
	generic <class T>
	T JsonUtils::Deserialize(String^ filename)
	{
		String^ json = File::ReadAllText(filename);
		auto deserializedObject = JsonConvert::DeserializeObject<T>(json, (JsonSerializerSettings ^)nullptr);
		return deserializedObject;
}

generic <class T>
void JsonUtils::Serialize(T value, String^ filename)
{
	auto result = JsonConvert::SerializeObject(value, Formatting::Indented);
	File::WriteAllText(filename, result);
	//return result;
}
}

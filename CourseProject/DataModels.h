#pragma once
using namespace System;
using namespace Collections::Generic;
namespace CourseProject
{
	public ref class DataModels abstract sealed
	{
		public:
		ref class Question
		{
			public:
			//incremental
			[JsonPropertyAttribute("id")]
			property UInt32 ID;
			[JsonPropertyAttribute("text")]
			property String^ Text;
			[JsonPropertyAttribute("answer")]
			property String^ AnswerText;
			[JsonPropertyAttribute("points")]
			property UInt32 Points;
			[JsonPropertyAttribute("created")]
			property DateTime^ CreatedTime;

};


ref class Questions
{
	private:
	List<Question^> ^_items = gcnew List<Question^>();
	public:
	[JsonPropertyAttribute("items")]
	property List<Question^> ^Items
	{
		List<Question^> ^get()
		{
			return _items;
}
void set(List<Question^> ^value)
{
	_items = value;
}
}
};

};
}

#pragma once
#include "Functions.h"

namespace CourseProject
{
	void Functions::FillList(String^ text, String^ ans, UInt32 points)
	{
		DataModels::Question^ newquestion = gcnew DataModels::Question();
		newquestion->ID = questionsList->Items->Count + 1;
		newquestion->Text = text;
		newquestion->AnswerText = ans;
		newquestion->CreatedTime = DateTime::Now;
		newquestion->Points = points;
		questionsList->Items->Add(newquestion);
}
void Functions::WriteToFile()
{
	FillList("Вопрос", "Ответ", 30);
	JsonUtils::Serialize(questionsList, _questionsfilename);
}
void Functions::ReadFromFile()
{
	questionsList = JsonUtils::Deserialize<DataModels::Questions^>(_questionsfilename);
}

List<DataModels::Questions^> ^Functions::Randomize(List<DataModels::Questions^> ^list)
{
	List<DataModels::Questions^> ^randomizedList = gcnew List<DataModels::Questions^>();

	while (list->Count > 0)
	{
		int index = rnd->Next(0, list->Count);
		randomizedList->Add(list[index]);
		list->RemoveAt(index);
}
return randomizedList;
}

DataModels::Question^ Functions::GetRandomQuestion()
{
	int index = rnd->Next(questionsList->Items->Count);
	return questionsList->Items[index];
}

bool Functions::CheckAnswer(String^ ans)
{
	if (ans->Equals(current->AnswerText))
	return true;
	else return false;
}

void Functions::NextQuestion()
{

}


/* String^ Functions::LoadFromCloud()
{
try
{
DropboxClient^ dbx = gcnew DropboxClient(access_token);
String^ folder = "app_service";
String^ file = _questionsfilename;
auto tdownload = dbx->Files->DownloadAsync();
//task->Wait();
auto res = tdownload->Result;
return res->Response->Rev;
}

catch (AggregateException^ e)
{
return e->InnerException->Message;
}
}*/
}

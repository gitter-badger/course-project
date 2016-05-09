#pragma once
#include "JsonUtils.h"
#include "DataModels.h"

namespace CourseProject
{
	using namespace System;
	using namespace System::Text;
	using namespace System::IO;
	using namespace System::Threading::Tasks;
	using namespace System::Threading;
	using namespace System::Diagnostics;
	using namespace Dropbox::Api;
	using namespace Dropbox::Api::Files;


	public ref class Functions abstract sealed
	{
		private:
		static Random ^rnd = gcnew Random();
		// to settings file
		static String^ _questionsfilename = "test.json";
		static String^ access_token = "TmWrUp_xjCAAAAAAAAAAChaOn_mLVPQgPtx-RUpILzhJApfdGRRyzTJf7hgjv326";
		public:
		static DataModels::Questions^ questionsList = gcnew DataModels::Questions();
		static DataModels::Question^ current = gcnew DataModels::Question();
		static void FillList(String^ text, String^ ans, UInt32 points);

		static void WriteToFile();
		static void ReadFromFile();

		static List<DataModels::Questions^> ^Randomize(List<DataModels::Questions^> ^list);
		static DataModels::Question^ GetRandomQuestion();
		static bool CheckAnswer(String^ ans);
		static void NextQuestion();

};
}

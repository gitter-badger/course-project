#pragma once
#include "SyntaxHighlighter.h"

namespace CourseProject
{
	SyntaxHighlighter::SyntaxHighlighter(TextBlock ^textBlock)
	{
		_textBlock = textBlock;
}

Char SyntaxHighlighter::Current::get()
{
	return _text[_index];
}

HashSet<String^> ^SyntaxHighlighter::Keywords::get()
{
	return gcnew HashSet<String^>(gcnew array<String^> {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long", "register", "restrict", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while", "_Alignas", "_Alignof", "_Atomic", "_Bool", "_Complex", "_Generic", "_Imaginary", "_Noreturn", "_Static_assert", "_Thread_local"});
}

void SyntaxHighlighter::DoHighlight(String ^text)
{
	_textBlock->Inlines->Clear();
	_builder = gcnew StringBuilder();
	_text = text;
	for (_index = 0; _index < _text->Length; _index++)
	{
		if (Current == '"')
		{
			AddRun(Colors::Black);
			HighlightStringConstant();
}
else
{
	if (!Char::IsLower(Current))
	{
		CheckKeywords();
}

_builder->Append(Current);
}
}

AddRun(Colors::Black);
}

void SyntaxHighlighter::CheckKeywords()
{

	auto matchCollection = KeywordRegex->Matches(_builder->ToString());
	auto Ematch = Enumerable::Cast<Match^>(matchCollection);
	auto match = Enumerable::LastOrDefault(Ematch);

	if (match != nullptr)
	{
		auto word = match->Value;
		if (Keywords->Contains(word))
		{
			if (match->Index > 0)
			{
				_builder->Remove(match->Index, _builder->Length - match->Index);
				AddRun(Colors::Black);
				_builder = gcnew StringBuilder(word);
}
AddRun(Colors::Blue);
}
}
}

void SyntaxHighlighter::HighlightStringConstant()
{
	_index++;
	bool escaped = false;
	_builder->Append(L'"');
	while (_index < _text->Length && (Current != '"' || escaped))
	{
		_builder->Append(Current);
		if (Current == '\\')
		{
			escaped = !escaped;
}
else
{
	escaped = false;
}
_index++;
}
if (_index < _text->Length && Current == '"')
{
	_builder->Append(L'"');
}
AddRun(Colors::Coral);
}

void SyntaxHighlighter::AddRun(Color color)
{
	System::Windows::Documents::Run^ run = gcnew System::Windows::Documents::Run();
	run->Foreground = gcnew SolidColorBrush(color);
	run->Text = _builder->ToString();
	_textBlock->Inlines->Add(run);
	_builder = gcnew StringBuilder();
}
}

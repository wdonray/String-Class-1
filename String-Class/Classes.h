#pragma once


class MyString
{
public:
	MyString() {};
	MyString(char *first);

	//DESCRIPTIONS:	function of type char that finds whatever character is at the index that it is passed
	//PARAMETERS: function takes one parameter of type int that is used for the number of the index
	//
	char accessIndex(int);
	bool compareStrings(MyString);
	void append(MyString);
	void prepend(MyString);
	void lowercase();
	void uppercase();
	bool subString();
	bool subStringAtIndex(int);
	void replaceSubString();
	char *getString();
	const char *constantCStyleString();
private:
	char m_Data[255];
	int m_Length;
};
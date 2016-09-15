#pragma once


class MyString
{
public:
	MyString() {};
	MyString(char *first);
	int getLength();
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
private:
	char m_Data[255];
};
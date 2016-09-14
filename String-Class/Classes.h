#pragma once


class MyString
{
public:
	MyString() {};
	MyString(char *first);
	int getLength();
	char accessIndex(int);
	bool compareStrings(MyString);
	bool append(MyString);
	bool prepend(MyString);
	bool lowercase();
	bool uppercase();
	bool subString();
	bool subStringAtIndex(int);
	void replaceSubString();
	char *getString();
private:
	char m_Data[255];
	
};
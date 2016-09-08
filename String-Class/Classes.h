#pragma once


class stringClass
{
public:
	stringClass() {};
	stringClass(char *first);
	int getLength();
	bool accessIndex();
	bool compareStrings(stringClass,stringClass);
	bool append(stringClass, stringClass);
private:
	const char * m_Word;
	
};
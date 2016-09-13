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
	bool prepend(stringClass, stringClass);
	bool lowercase(stringClass, stringClass,int,int);
	bool uppercase(stringClass, stringClass, int, int);
private:
	const char * m_Word;
	
};
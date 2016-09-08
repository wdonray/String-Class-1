#pragma once


class stringClass
{
public:
	stringClass() {};
	stringClass(const char * &first, const char * &second);
	int getLength();
	bool accessIndex();
	bool compareStrings(int);
	bool append();
private:
	const char * m_FirstWord = { "Bubble" };
	const char * m_SecondWord = { "Noodle" };
	
};
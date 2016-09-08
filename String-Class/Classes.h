#pragma once


class stringClass
{
public:
	stringClass() {};
	stringClass(const char * &first, const char * &second);
	int getLength();
private:
	const char * m_FirstWord = { "Bubble" };
	const char * m_SecondWord = { "Noodle" };
};
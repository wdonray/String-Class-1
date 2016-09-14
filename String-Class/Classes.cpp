#include "Classes.h"
#include <iostream>



MyString::MyString(char *first)
{
	int i;
	for (i = 0; first[i] != '\0'; i++)
	{
		m_Data[i] = first[i];
	}
	m_Data[i] = '\0';
}

int MyString::getLength()
{
	int i;
	for (i = 0;;)
	{
		if (m_Data[i] == '\0')
		{
			break;
		}
		i++;
	}
	int WordLength = i;
	return WordLength;
}

char MyString::accessIndex(int index)
{
	std::cout << m_Data[index] << std::endl;
	return m_Data[index];
}

bool MyString::compareStrings(MyString second)
{
	bool equalStrings;
	for (int i = 0;; i++)
	{
		equalStrings = (m_Data[i] == second.m_Data[i]) ? true : false;
		if (equalStrings == false)
		{
			std::cout << "Not equal" << std::endl;
			break;
		}
	}
	if (equalStrings == true)
	{
		std::cout << "Equal" << std::endl;
	}
	return equalStrings;
}


bool MyString::append(MyString second)
{
	int oldLength = getLength();
	int i;
	for (i = 0; second.m_Data[i] != '\0'; i++)
	{
		m_Data[i + oldLength] = second.m_Data[i];
	}
	m_Data[i+oldLength] = '\0';
	return false;
}

bool MyString::prepend(MyString second)
{
	char copy[255];
	int oldLength = second.getLength();
	int original = getLength();
	for (int i = 0; i < original; i++)
	{
		copy[i] = m_Data[i];
	}
	for (int i = 0;i<original; i++)
	{
		m_Data[i + oldLength] = copy[i];
	}
	for (int i = 0; i < oldLength; i++)
	{
		m_Data[i] = second.m_Data[i];
	}
	return false;
}

bool MyString::lowercase()
{
	char *lowerCase = new char[getLength()];
	for (int i = 0; i < getLength(); i++)
	{
		if ((int)m_Data[i] > 64 && (int)m_Data[i] < 91)
		{
			(char)lowerCase[i] = (int)m_Data[i] + 32;
		}
		else
		{
			lowerCase[i] = m_Data[i];
		}
	}
	return false;
}

bool MyString::uppercase()
{
	char *uppercasefirst = new char[getLength()];
	for (int i = 0; i < getLength(); i++)
	{
		if ((int)m_Data[i] > 96 && (int)m_Data[i] < 123)
		{
			(char)uppercasefirst[i] = (int)m_Data[i] - 32;
		}
		else
		{
			uppercasefirst[i] = m_Data[i];
		}
	}
	return false;
}

bool MyString::subString()
{
	bool isSubStringFound;
	const char * sub = { "bb" };
	int x = 0;
	for (int i = 0; i < getLength(); i++)
	{
		if (m_Data[i] == sub[x])
		{
			x++;
			if (x == 2)
			{
				isSubStringFound = true;
				break;
			}

		}
		else
		{
			isSubStringFound = false;
		}
	}
	std::cout << isSubStringFound << std::endl;;
	return isSubStringFound;
}

bool MyString::subStringAtIndex(int index)
{
	bool isSubStringFoundAtIndex = false;
	const char * sub = { "bb" };
	int x = 0;
	for (int i = 0 + index; i < getLength(); i++)
	{
		if (m_Data[i] == sub[x])
		{
			x++;
			if (x == 2)
			{
				isSubStringFoundAtIndex = true;
				break;
			}
		}
		else
		{
			isSubStringFoundAtIndex = false;
		}
	}
	std::cout << isSubStringFoundAtIndex << std::endl;
	return isSubStringFoundAtIndex;
}

void MyString::replaceSubString()
{
	bool isSubStringFound;
	const char * sub = { "bb" };
	const char * subReplace = { "cc" };
	int x = 0;
	for (int i = 0; i < getLength(); i++)
	{
		if (m_Data[i] == sub[x])
		{
			x++;
			if (x == 2)
			{
				isSubStringFound = true;
				break;
			}
		}
		else
		{
			isSubStringFound = false;
		}
	}
	x = 0;
	char *replacedString = new char[getLength()];
	for (int i = 0; i < getLength(); i++)
	{

		if (m_Data[i] == sub[x])
		{
			replacedString[i] = subReplace[x];
			x++;
		}
		else
		{
			replacedString[i] = m_Data[i];
		}
	}
}

char *MyString::getString()
{
	char word[255];
	std::cin.getline(word, 255);
	return word;
}

#include "Classes.h"
#include <iostream>



stringClass::stringClass(const char * &first, const char * &second)
{
	m_FirstWord = first;
	m_SecondWord = second;
}

int stringClass::getLength()
{
	int i;
	for (i = 0;;)
	{
		if (m_FirstWord[i] == '\0')
		{
			break;
		}
		i++;
	}
	int FirstWordLength = i;
	return FirstWordLength;
	return ;
}

bool stringClass::accessIndex()
{
	std::cout << "What index would you like to access?\n";
	int index;
	std::cin >> index;
	std::cout << m_FirstWord[index] << std::endl;;
	return true;
}

bool stringClass::compareStrings(int size)
{
	bool equalStrings;
	for (int i = 0; i < size; i++)
	{
		equalStrings = (m_FirstWord[i] == m_SecondWord[i]) ? true : false;
		if (equalStrings == false)
		{
			break;
		}
	}
	return equalStrings;
}

bool stringClass::append()
{
	const char * c = strcat(m_FirstWord, m_SecondWord);
	return false;
}

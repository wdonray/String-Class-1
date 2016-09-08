#include "Classes.h"
#include <iostream>



stringClass::stringClass(char *first)
{
	m_Word = first;
}

int stringClass::getLength()
{
	int i;
	for (i = 0;;)
	{
		if (m_Word[i] == '\0')
		{
			break;
		}
		i++;
	}
	int WordLength = i;
	return WordLength;
}

bool stringClass::accessIndex()
{
	std::cout << "What index would you like to access?\n";
	int index;
	std::cin >> index;
	while (!std::cin)
	{
		std::cout << "Not a valid index" << std::endl;
		std::cin.clear();
		std::cin.ignore();
		std::cin >> index;
	}
	std::cout << m_Word[index] << std::endl;;
	return true;
}

bool stringClass::compareStrings(stringClass first,stringClass second)
{
	bool equalStrings;
	for (int i = 0;; i++)
	{
		equalStrings = (first.m_Word[i] == second.m_Word[i]) ? true : false;
		if (equalStrings == false)
		{
			break;
		}
	}
	return equalStrings;
}


bool stringClass::append(stringClass first, stringClass second)
{
	char appendedString[40];
	int i;
	for (i = 0;;)
	{
		for (int j = 0; first.m_Word[j] != '\0'; j++)
		{
			appendedString[i] = first.m_Word[j];
			i++;
		}
		for (int k = 0; second.m_Word[k] != '\0'; k++)
		{
			appendedString[i] = second.m_Word[k];
			i++;
		}
		break;
	}
	appendedString[i] = '\0';
	for (int index = 0;appendedString[index]!='\0';index ++)
	{
		std::cout << appendedString[index];
	}
	return false;
}

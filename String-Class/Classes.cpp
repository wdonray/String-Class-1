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
	std::cout << std::endl;
	return false;
}

bool stringClass::prepend(stringClass first, stringClass second)
{
	char prependString[40];
	int i;
	for (i = 0;;)
	{
		for (int j = 0; second.m_Word[j] != '\0'; j++)
		{
			prependString[i] = second.m_Word[j];
			i++;
		}
		for (int k = 0; first.m_Word[k] != '\0'; k++)
		{
			prependString[i] = first.m_Word[k];
			i++;
		}
		break;
	}
	prependString[i] = '\0';
	for (int index = 0; prependString[index] != '\0'; index++)
	{
		std::cout << prependString[index];
	}
	std::cout << std::endl;
	return false;
}

bool stringClass::lowercase(stringClass first, stringClass second,int firstSize,int secondSize)
{
	char *lowercasefirst = new char[firstSize];
	for (int i = 0; i < firstSize; i++)
	{
		if ((int)first.m_Word[i]>64 && (int)first.m_Word[i] < 91)
		{
			(char)lowercasefirst[i] = (int)first.m_Word[i]+32;
		}
		else
		{
			lowercasefirst[i] = first.m_Word[i];
		}
		std::cout << lowercasefirst[i];
	}
	std::cout << std::endl;

	char *lowercasesecond = new char[secondSize];
	for (int i = 0; i < secondSize; i++)
	{
		if ((int)second.m_Word[i]>64 && (int)second.m_Word[i] < 91)
		{
			(char)lowercasesecond[i] = (int)second.m_Word[i] + 32;
		}
		else
		{
			lowercasesecond[i] = second.m_Word[i];
		}
		std::cout << lowercasesecond[i];
	}
	std::cout << std::endl;
	return false;
}

bool stringClass::uppercase(stringClass first, stringClass second, int firstSize, int secondSize)
{
	char *uppercasefirst = new char[firstSize];
	for (int i = 0; i < firstSize; i++)
	{
		if ((int)first.m_Word[i]>96 && (int)first.m_Word[i] < 123)
		{
			(char)uppercasefirst[i] = (int)first.m_Word[i] - 32;
		}
		else
		{
			uppercasefirst[i] = first.m_Word[i];
		}
		std::cout << uppercasefirst[i];
	}
	std::cout << std::endl;

	char *uppercasesecond = new char[secondSize];
	for (int i = 0; i < secondSize; i++)
	{
		if ((int)second.m_Word[i]>96 && (int)second.m_Word[i] < 123)
		{
			(char)uppercasesecond[i] = (int)second.m_Word[i] - 32;
		}
		else
		{
			uppercasesecond[i] = second.m_Word[i];
		}
		std::cout << uppercasesecond[i];
	}
	std::cout << std::endl;
	return false;
}

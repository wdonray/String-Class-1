#include "Classes.h"
#include <iostream>



MyString::MyString(char *first)//constructor definition to set the value of the string
{
	int i;
	for (i = 0; first[i] != '\0'; i++)//loops through the array to set values until it reaches a null character
	{
		m_Data[i] = first[i];
	}
	m_Data[i] = '\0';
}

int MyString::getLength()//gets the length of the string by counting until it reaches the null character
{
	int i = 0;
	//for (i = 0; m_Data[i] != '\0'; i++)//loops through the string until the null character is found
	//{
	//}
	while (m_Data[i] != '\0')
	{
		i++;
	}
	return i;//returns the value the loop stops at which is the length of the string
}

char MyString::accessIndex(int index)//takes in an integer which is used as the index to return a character at that index
{
	std::cout << m_Data[index] << std::endl;
	return m_Data[index];
}

bool MyString::compareStrings(MyString second)//compares each character in the strings to check for equality
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

void MyString::append(MyString second) // appends the second string on the end of the first string
{
	int oldLength = getLength();
	int i;
	for (i = 0; second.m_Data[i] != '\0'; i++)
	{
		m_Data[i + oldLength] = second.m_Data[i];
	}
	m_Data[i + oldLength] = '\0';
	for (int i = 0; m_Data[i] != '\0'; i++)
	{
		std::cout << m_Data[i];
	}
	std::cout << std::endl;
}

void MyString::prepend(MyString second) //prepends the second string on the beginning of the first string which now has the second string appended on the front of it
{
	char copy[255];
	int oldLength = second.getLength();
	int original = getLength();
	int position;
	for (int i = 0; i < original; i++)
	{
		copy[i] = m_Data[i];
	}
	for (int i = 0; i < original; i++)
	{
		m_Data[i + oldLength] = copy[i];
	}
	for (position = 0; position < oldLength; position++)
	{
		m_Data[position] = second.m_Data[position];
	}
	m_Data[position + original] = '\0';
	for (int i = 0; m_Data[i] != '\0'; i++)
	{
		std::cout << m_Data[i];
	}
	std::cout << std::endl;
}

void MyString::lowercase() // makes all letters in the string lowercase
{
	for (int i = 0; i < getLength(); i++)
	{
		if ((int)m_Data[i] > 64 && (int)m_Data[i] < 91)
		{
			(char)m_Data[i] = (int)m_Data[i] + 32;
		}
		else
		{
			m_Data[i] = m_Data[i];
		}
	}
	for (int i = 0; m_Data[i] != '\0'; i++)
	{
		std::cout << m_Data[i];
	}
	std::cout << std::endl;
}

void MyString::uppercase()//makes all letters in the string capitalize
{
	for (int i = 0; i < getLength(); i++)
	{
		if ((int)m_Data[i] > 96 && (int)m_Data[i] < 123)
		{
			(char)m_Data[i] = (int)m_Data[i] - 32;
		}
		else
		{
			m_Data[i] = m_Data[i];
		}
	}
	for (int i = 0; m_Data[i] != '\0'; i++)
	{
		std::cout << m_Data[i];
	}
	std::cout << std::endl;
}

bool MyString::subString()//searches the string for a sequence of characters
{
	bool isSubStringFound=false;
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
			x = 0;
		}
	}
	std::cout << isSubStringFound << std::endl;;
	return isSubStringFound;
}

bool MyString::subStringAtIndex(int index)//searches the string for a sequence of characters starting at a certain index
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
			x = 0;
		}
	}
	std::cout << isSubStringFoundAtIndex << std::endl;
	return isSubStringFoundAtIndex;
}

void MyString::replaceSubString()//searches the string for a sequence of characters and if found replaces them with another sequence of characters
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
				for (int i = 0; i < getLength(); i++)
				{
					if (m_Data[i] == sub[x])
					{
						m_Data[i] = subReplace[x];
						x++;
					}
					else
					{
						x = 0;
					}
				}
				break;
			}
		}
		else
		{
			isSubStringFound = false;
			x = 0;
		}
	}
	x = 0;

	for (int i = 0; m_Data[i] != '\0'; i++)
	{
		std::cout << m_Data[i];
	}
	std::cout << std::endl;
}

char *MyString::getString()//gets a string from user input
{
	char word[255];
	std::cin.getline(word, 255);
	return word;
}
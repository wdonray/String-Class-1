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
	for (int i = 0;; i++)//loops through the characters in the string comparing it to the second string
	{
		equalStrings = (m_Data[i] == second.m_Data[i]) ? true : false;//if the characters are equal then the equalStrings is set to true
		if (equalStrings == false)//if the equalStrings is false then break out of the loop 
		{
			std::cout << "Not equal" << std::endl;
			break;
		}
	}
	if (equalStrings == true)//Once the loop is done check if equalStrings is true and if it is then say that they are equal
	{
		std::cout << "Equal" << std::endl;
	}
	return equalStrings;
}

void MyString::append(MyString second) // appends the second string on the end of the first string
{
	int oldLength = getLength();//get current length of the string
	int i;
	for (i = 0; second.m_Data[i] != '\0'; i++)//loop setting the original string with the second string appended on the end
	{
		m_Data[i + oldLength] = second.m_Data[i];
	}
	m_Data[i + oldLength] = '\0';
	for (int i = 0; m_Data[i] != '\0'; i++)//loops to print the new string
	{
		std::cout << m_Data[i];
	}
	std::cout << std::endl;
}

void MyString::prepend(MyString second) //prepends the second string on the beginning of the first string which now has the second string appended on the front of it
{
	char copy[255];//array of characters ment to copy the current string
	int oldLength = second.getLength();//get current length of second string
	int original = getLength();//get current lenght of first string
	int position;
	for (int i = 0; i < original; i++)//fills the copy array with the current first string
	{
		copy[i] = m_Data[i];
	}
	for (int i = 0; i < original; i++)//uses the copy array to shift the current first string 
	{
		m_Data[i + oldLength] = copy[i];
	}
	for (position = 0; position < oldLength; position++)//places the second string where the first string is no longer
	{
		m_Data[position] = second.m_Data[position];
	}
	m_Data[position + original] = '\0';
	for (int i = 0; m_Data[i] != '\0'; i++)//loops to print the new string
	{
		std::cout << m_Data[i];
	}
	std::cout << std::endl;
}

void MyString::lowercase() // makes all letters in the string lowercase
{
	for (int i = 0; i < getLength(); i++)
	{
		if ((int)m_Data[i] > 64 && (int)m_Data[i] < 91)//check if the letters in the string are uppercase
		{
			(char)m_Data[i] = (int)m_Data[i] + 32;//if they are then change their integer value to the ascii value for lowercase
		}
	}
	for (int i = 0; m_Data[i] != '\0'; i++)//prints the new string
	{
		std::cout << m_Data[i];
	}
	std::cout << std::endl;
}

void MyString::uppercase()//makes all letters in the string capitalize
{
	for (int i = 0; i < getLength(); i++)
	{
		if ((int)m_Data[i] > 96 && (int)m_Data[i] < 123)//check if the letters in the string are lowercase
		{
			(char)m_Data[i] = (int)m_Data[i] - 32;//if they are then change their integer value to the ascii value for uppercase
		}
	}
	for (int i = 0; m_Data[i] != '\0'; i++)//print the new string
	{
		std::cout << m_Data[i];
	}
	std::cout << std::endl;
}

bool MyString::subString()//searches the string for a sequence of characters
{
	bool isSubStringFound=false;
	const char * sub = { "bb" };//characters that are being searched for
	int x = 0;
	for (int i = 0; i < getLength(); i++)
	{
		if (m_Data[i] == sub[x])//check if the characters at the index i are the same
		{
			x++;
			if (x == 2)//check if x is 2 if so the set the value of the of isSubStringFound to true
			{
				isSubStringFound = true;
				break;
			}

		}
		else//if the characters at the index are not equal then set isSubStringFound to false and reset x to 0
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
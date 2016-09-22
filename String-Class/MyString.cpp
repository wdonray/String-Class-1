#include "MyString.h"



MyString::MyString(char *first)//constructor definition to set the value of the string
{
	int i;
	for (i = 0; first[i] != '\0'; i++)//loops through the array to set values until it reaches a null character
	{
		m_Data[i] = first[i];
	}
	m_Data[i] = '\0';
	m_Length = i;
}
int MyString::getLength()
{
	return m_Length;
}
//function accessIndex
//takes one argument of type int
//takes in an integer which is used as the index to return a character at that index
char MyString::accessIndex(int index)
{
	return m_Data[index];
}
//funtion compareStrings
//takes one argument of type MyString
//compares each character in the strings to check for equality
bool MyString::compareStrings(MyString second)
{
	bool equalStrings;
	for (int i = 0;; i++)//loops through the characters in the string comparing it to the second string
	{
		equalStrings = (m_Data[i] == second.m_Data[i]) ? true : false;//if the characters are equal then the equalStrings is set to true
		if (equalStrings == false)//if the equalStrings is false then break out of the loop 
		{
			break;
		}
		if (i > m_Length && i > second.m_Length)
		{
			break;
		}
	}
	return equalStrings;
}

char * MyString::append(MyString second) // appends the second string on the end of the first string
{
	int oldLength = m_Length;//get current length of the string
	int i;
	for (i = 0; second.m_Data[i] != '\0'; i++)//loop setting the original string with the second string appended on the end
	{
		m_Data[i + oldLength] = second.m_Data[i];
	}
	m_Data[i + oldLength] = '\0';
	m_Length = i + oldLength;
	return m_Data;
}
//function prepend
//takes one argument of type MyString
//prepends the second string on the beginning of the first string which now has the second string appended on the front of it
char * MyString::prepend(MyString second)
{
	char copy[255];//array of characters ment to copy the current string
	int oldLength = second.m_Length;//get current length of second string
	int i = 0;
	for (int i = 0; i < m_Length; i++)//fills the copy array with the current first string
	{
		copy[i] = m_Data[i];
	}
	for (int i = 0; i < m_Length; i++)//uses the copy array to shift the current first string 
	{
		m_Data[i + oldLength] = copy[i];
	}
	for (i = 0; i < oldLength; i++)//places the second string where the first string is no longer
	{
		m_Data[i] = second.m_Data[i];
	}
	m_Data[i + m_Length] = '\0';
	m_Length += second.m_Length;
	return m_Data;
}
//function lowercase
//takes no arguments
// makes all letters in the string lowercase
char * MyString::ToLower()
{
	for (int i = 0; i < m_Length; i++)
	{
		if ((int)m_Data[i] > 64 && (int)m_Data[i] < 91)//check if the letters in the string are uppercase
		{
			(char)m_Data[i] = (int)m_Data[i] + 32;//if they are then change their integer value to the ascii value for lowercase
		}
	}
	return m_Data;
}
//function uppercase
// no arguments
//makes all letters in the string uppercase
char * MyString::ToUpper()
{
	for (int i = 0; i < m_Length; i++)
	{
		if ((int)m_Data[i] > 96 && (int)m_Data[i] < 123)//check if the letters in the string are lowercase
		{
			(char)m_Data[i] = (int)m_Data[i] - 32;//if they are then change their integer value to the ascii value for uppercase
		}
	}
	return m_Data;
}
//function subString
//takes no arguments
//searches the string for a sequence of characters
bool MyString::subString(char *sub)
{
	bool isSubStringFound = false;
	MyString temp = MyString(sub);//characters that are being searched for
	int x = 0;
	for (int i = 0; i < m_Length; i++)
	{
		if (m_Data[i] == sub[x])//check if the characters at the index i are the same
		{
			x++;
			if (x == temp.m_Length)//check if x is 2 if so the set the value of the of isSubStringFound to true
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
	return isSubStringFound;
}
//function subStringAtIndex
//takes one argument of type int
//searches the string for a sequence of characters starting at a certain index
bool MyString::subStringAtIndex(int index, char * sub)
{
	MyString temp = MyString(sub);
	bool isSubStringFoundAtIndex = false;
	int x = 0;
	for (int i = index; i < m_Length; i++)
	{
		if (m_Data[i] == sub[x])//check if the characters at the index i are the same
		{
			x++;
			if (x == temp.m_Length)//check if x is 2 if so the set the value of the of isSubStringFoundAtIndex to true
			{
				isSubStringFoundAtIndex = true;
				break;
			}
		}
		else//if the characters at the index are not equal then set isSubStringFound to false and reset x to 0
		{
			isSubStringFoundAtIndex = false;
			x = 0;
		}
	}
	return isSubStringFoundAtIndex;
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------
//									       NOT WORKING
//-----------------------------------------------------------------------------------------------------------------------------------------------------

//	DOES NOT WORK AT ALL 
//function replaceSubString
//takes no arguments
//searches the string for a sequence of characters and if found replaces them with another sequence of characters
void MyString::replaceSubString()
{
	bool isSubStringFound;
	const char * sub = { "bb" };//characters that are being searched for
	int x = 0;
	const char * subReplace = { "cc" };//characters that will replace the ones that are being searched for
	for (int i = 0; i < m_Length; i++)
	{
		if (m_Data[i] == sub[x])//check if the characters at the index i are the same
		{
			x++;
			if (x == 2)//check if x is 2 if so the set the value of the of isSubStringFoundAtIndex to true
			{
				isSubStringFound = true;
				for (int i = 0; i < m_Length; i++)
				{
					if (m_Data[i] == sub[x])
					{
						m_Data[i] = subReplace[x];
						x++;
					}
					else//if the characters at the index are not equal then set isSubStringFound to false and reset x to 0
					{
						x = 0;
					}
				}
				break;
			}
		}
	}
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------
//											NOT WORKING
//-----------------------------------------------------------------------------------------------------------------------------------------------------


char * MyString::replace(char*sub, char*rep)
{
	MyString temp = MyString(sub);//characters that are being searched for
	MyString newString = MyString(rep);//characters that are going to be replaced
	MyString copy = MyString(m_Data);
	int x = 0;
	int track = 0;
	int CopyIndex = 0;
	for (int i = 0; i < m_Length; i++)
	{
		CopyIndex = track;
		if (m_Data[i] == sub[x])//check if the characters at the index i are the same
		{
			x++;
			if (x == temp.m_Length)//check to set the value of the of isSubStringFound to true
			{
				x = 0;
				if (temp.m_Length < newString.m_Length)
				{
					m_Length += (newString.m_Length - temp.m_Length);
				}
				else
				{
					m_Length -= (temp.m_Length - newString.m_Length);
				}
				CopyIndex++;
				for (int j = 0; j < newString.m_Length; j++)
				{
					m_Data[(j + i) - (temp.m_Length - 1)] = newString.m_Data[j];
				}
				{
					int placeHolder = CopyIndex;
					for (int DataIndex = i - temp.m_Length + newString.m_Length + 1; DataIndex < m_Length; DataIndex++)//
					{
						m_Data[DataIndex] = copy.m_Data[CopyIndex];
						CopyIndex++;
					}
					CopyIndex = placeHolder;
				}
				if (temp.m_Length < newString.m_Length)
				{
					i = i + (newString.m_Length - temp.m_Length);
				}
				else if (temp.m_Length>newString.m_Length)
				{
					i = i - (temp.m_Length - newString.m_Length);
				}
			}
		}
		else//if the characters at the index are not equal then set isSubStringFound to false and reset x to 0
		{
			x = 0;
		}
		m_Data[m_Length] = '\0';

		track++;
	}
	return m_Data;
}
//functinon getString
//takes no arguments
//gets the string from the users input

const char * MyString::constantCStyleString()
{
	const char * constanceCString = m_Data;
	return constanceCString;
}
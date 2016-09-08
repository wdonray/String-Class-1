#include "Classes.h"




stringClass::stringClass(const char * &first, const char * &second)
{
	m_FirstWord = first;
	m_SecondWord = second;
}

int stringClass::getLength()
{
	int i;
	for ( i = 0;;)
	{
		if (m_FirstWord[i] == '\0')
		{
			break;
		}
		i++;
	}
	
	int FirstWordLength=i;
	
	return FirstWordLength;
}

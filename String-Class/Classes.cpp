#include "Classes.h"




stringClass::stringClass(const char * &first, const char * &second)
{
	first = m_FirstWord;
	second = m_SecondWord;
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

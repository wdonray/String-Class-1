#include<iostream>>
#include"Classes.h"

int main()
{
	stringClass firstTest = stringClass("Bubble");
	stringClass secondTest = stringClass("Noodle");
	int firstLength =firstTest.getLength();
	int secondLength = secondTest.getLength();
	std::cout << firstLength << std::endl;
	std::cout << secondLength << std::endl;
	firstTest.accessIndex();
	firstTest.compareStrings(firstTest,secondTest);
	firstTest.append(firstTest,secondTest);
	firstTest.prepend(firstTest, secondTest);
	firstTest.lowercase(firstTest, secondTest, firstLength, secondLength);
	firstTest.uppercase(firstTest, secondTest, firstLength, secondLength);
	system("pause");
	return 0;
}
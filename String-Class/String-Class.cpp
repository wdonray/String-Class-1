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
	//firstTest.accessIndex();
	int equalStrings = firstTest.compareStrings(firstTest,secondTest);
	std::cout << equalStrings << std::endl;
	firstTest.append(firstTest,secondTest);
	system("pause");
	return 0;
}
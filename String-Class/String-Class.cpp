#include<iostream>>
#include"Classes.h"
#include<cassert>

int main()
{
	MyString firstTest = MyString(firstTest.getString());
	MyString secondTest = MyString(secondTest.getString());
	int firstLength =firstTest.getLength();
	int secondLength = secondTest.getLength();
	std::cout << firstLength << std::endl;
	std::cout << secondLength << std::endl;
	int index = 3;
	firstTest.constantCStyleString();
	firstTest.accessIndex(index);
	firstTest.compareStrings(secondTest);
	firstTest.subString();
	firstTest.subStringAtIndex(index);
	firstTest.replaceSubString();
	firstTest.lowercase();
	firstTest.uppercase();
	firstTest.append(secondTest);
	firstTest.prepend(secondTest);
	system("pause");
	return 0;
}
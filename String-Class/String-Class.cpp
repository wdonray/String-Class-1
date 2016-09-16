#include<iostream>>
#include"Classes.h"
#include<cassert>

int main()
{
	MyString firstString = MyString(firstString.getString());
	MyString secondString = MyString(secondString.getString());
	int index = 3;
	std::cout << "\nConstant C Style String: " << firstString.constantCStyleString() << std::endl;;
	std::cout << "At the Index 3: " << firstString.accessIndex(index) << "\n\n";
	std::cout << "Strings Equal? "<< firstString.compareStrings(secondString) << "\n\n";
	std::cout << firstString.subString() << "\n\n";
	std::cout << firstString.subStringAtIndex(index) << "\n\n";
	firstString.replaceSubString();
	firstString.append(secondString);
	firstString.prepend(secondString);
	firstString.lowercase();
	firstString.uppercase();
	system("pause");
	return 0;
}
#include<iostream>>
#include"Classes.h"
#include<cassert>

int main()
{
	char First[255];
	char Second[255];
	std::cin.getline(First, 255);
	std::cin.getline(Second, 255);
	MyString firstString = MyString(First);
	MyString secondString = MyString(Second);
	int index = 3;
	std::cout << "\nConstant C Style String: " << firstString.constantCStyleString() << std::endl;;
	std::cout << "At the Index 3: " << firstString.accessIndex(index) << "\n\n";
	std::cout << "Strings Equal? "<< firstString.compareStrings(secondString) << "\n\n";
	std::cout << firstString.subString("ee") << "\n\n";
	std::cout << firstString.subStringAtIndex(index,"ee") << "\n\n";
	//firstString.replaceSubString();
	firstString.replace("cancer", "death");
	firstString.append(secondString);
	firstString.prepend(secondString);
	firstString.lowercase();
	firstString.uppercase();
	system("pause");
	return 0;
}
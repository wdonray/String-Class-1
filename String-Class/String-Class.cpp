#include<iostream>>
#include"Classes.h"

int main()
{
	char First[255];
	char Second[255];
	std::cin.getline(First, 255);
	std::cin.getline(Second, 255);
	MyString firstString = MyString(First);
	MyString secondString = MyString(Second);
	int index = 3;
	for (int i = 0; i < 100; i++)
	{
		std::cout << (char)22;
	}
	std::cout << "\nLength: " << firstString.getLength() << "\n\n"; 
	std::cout << "At the Index 3: " << firstString.accessIndex(index) << "\n\n";
	std::cout << "Strings Equal? "; 
	(firstString.compareStrings(secondString)==1)? std::cout << "True\n\n":std::cout<<"False\n\n";
	std::cout << "Constant C Style String: " << firstString.constantCStyleString() << "\n\n";
	std::cout << "Is sub string found: ";
	(firstString.subString("ee") == 1) ? std::cout << "True\n\n" : std::cout << "False\n\n";
	std::cout << "Is sub string found starting at index " << index << ": ";
	(firstString.subStringAtIndex(index, "ee")==1) ? std::cout << "True\n\n":std::cout<<"False\n\n";
	std::cout << "Replace: " << firstString.replace("a", "A") << "\n\n";
	std::cout << "Append: " << firstString.append(" <- Back") << "\n\n";
	std::cout << "Prepend: " <<	firstString.prepend("Front -> ") << "\n\n";
	std::cout << "Lowercase: " << firstString.lowercase() << "\n\n";
	std::cout << "Uppercase: " << firstString.uppercase() << "\n\n";
	system("pause");
	return 0;
}
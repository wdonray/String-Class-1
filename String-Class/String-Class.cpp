#include<iostream>>
#include"Classes.h"

int main()
{
	stringClass test;
	int jdjd =test.getLength();
	std::cout << jdjd << std::endl;
	test.accessIndex();
	int equalStrings = test.compareStrings(jdjd);
	std::cout << equalStrings << std::endl;
	system("pause");
	return 0;
}
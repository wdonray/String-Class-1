#pragma once


class MyString
{
public:
	MyString() {};
	MyString(char *first);

	//PROTOTYPE: getLength(); 
	//DESCRIPTION: returns the length of the instance of MyString using the member variable m_Length
	//PARAMETERS: takes no parameters
	//PRECONDITION: must have an initialized string
	//POST CONDITION:
	//VISIBILITY: public
	int getLength();

	//PROTOTYPE: accessIndex(int)
	//DESCRIPTION: function of type char that finds whatever character is at the index that it is passed
	//PARAMETERS: function takes one parameter of type int that is used for the number of the index
	//PRECONDITION: must have an index
	//POST CONDITION: 
	//VISIBILITY: public
	char accessIndex(int);

	//PROTOTYPE: compareStrings(MyString)
	//DESCRIPTION: compares the string-(m_Data)- from the instance being called to another one that is passed to it and returns true or false
	//PARAMETERS: takes one parameter of type MyString
	//PRECONDITION: must have a second string to pass into the function
	//POST CONDITION:
	//VISIBILITY: public
	bool compareStrings(MyString);

	//PROTOTYPE: append(MyString)
	//DESCRIPTION: appends the MyString that is passed to it to the end of the instance of the class and returns a pointer to the new string
	//PARAMETERS: takes one parameter of type MyString
	//PRECONDITION: must have a second string to pass into the function
	//POST CONDITION:
	//VISIBILITY: public
	char * append(MyString);

	//PROTOTYPE: prepend(MyString)
	//DESCRIPTION: prepends the MyString that is passed to it to the beggining of the current string of the instance being called
		//and then returns a pointer to the new string
	//PARAMETERS: takes one parameter of type MyString 
	//PRECONDITION: must have a second string to pass into the function
	//POST CONDITION:
	//VISIBILITY: public
	char * prepend(MyString);

	//PROTOTYPE: ToLower()
	//DESCRIPTION: changes all letters in the string to their lowercase counterparts using the ascii value and returns a pointer to the new string
	//PARAMETERS:  takes no parameters
	//PRECONDITION: none
	//POST CONDITION:
	//VISIBILITY: public
	char * ToLower();

	//PROTOTYPE: ToUpper()
	//DESCRIPTION: changes all letters in the string to their uppercase counterparts using the ascii value and returns a pointer to the new string 
	//PARAMETERS: takes no parameters
	//PRECONDITION: none
	//POST CONDITION:
	//VISIBILITY: public
	char * ToUpper();

	//PROTOTYPE: subString(char *)
	//DESCRIPTION: searches the string for a set of characters that are passed to it
	//PARAMETERS: takes one parameter of type char *
	//PRECONDITION: must be passed a character pointer
	//POST CONDITION:
	//VISIBILITY: public
	bool subString(char *);

	//PROTOTYPE: subStringAtIndex(int,char*)
	//DESCRIPTION: searches the string for a set of characters that are passed to it starting at a certain index that is also passed to it
	//PARAMETERS: takes two parameters one of type int which is the index and one of type char * which is the sub string being searched for
	//PRECONDITION: must be passed an index and a character pointer
	//POST CONDITION:
	//VISIBILITY: public
	bool subStringAtIndex(int,char*);

	//PROTOTYPE: DOES NOT WORK
	//DESCRIPTION: DOES NOT WORK
	//PARAMETERS: DOES NOT WORK
	void replaceSubString();//not working

	//PROTOTYPE: replace(char*,char*)
	//DESCRIPTION: searches for a sub string then if it is found replaces that sub string with a different sub string
	//PARAMETERS: takes two parameters both of type char* one is the sub string being searched for and the other is the sub string that replaces it
	//PRECONDITION: must be passed two character pointers
	//POST CONDITION:
	//VISIBILITY: public
	char * replace(char*, char*);

	//PROTOTYPE: constantCStyleString()
	//DESCRIPTION: sets a const char * to the value of m_Data and then returns it
	//PARAMETERS: takes no parameters
	//PRECONDITION: none
	//POST CONDITION:
	//VISIBILITY: public
	const char *constantCStyleString();

private:
	// m_Data stores the string
	char m_Data[255];
	//m_Length stores the length of the string
	int m_Length;
};
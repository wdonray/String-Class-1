#include<iostream>
#include"MyString.h"
#include"GClasses.h"
#include <time.h>
#include <Windows.h>

int main()
{
	char m_name[] = { "" };
	std::cin.getline(m_name, 255);
	Hero User = Hero(m_name);
	system("cls");
	Sleep(500);
	std::cout << "Hello " << m_name <<", and welcome to your despair." << "\n \n";
	Sleep(800);
	std::cout << "You were thrown into this death trap for no reason. You must find the exit in \norder to live... Enjoy." << "\n";
	Room Room01 = Room{ 1,0,0,1, "Only two doors in this room, you may go East and South. \n~Which path will you take?"};
	Room Room02 = Room{ 1,1,0,1, "The room is empty... For now. \n \nThree doors are in this room East, South, and West. \n~Which path will you take?" };
	Room Room03 = Room{ 1,1,0,1, "Three doors are in this room East, South, and West. \n~Which path will you take?" };
	Room Room04 = Room{ 1,1,0,1, "Three doors are in this room East, South, and West. \n~Which path will you take?" };
	Room Room05 = Room{ 1,0,0,1, "Only two doors in this room, you may go East and South. \n~Which path will you take?" };
	Room Room06 = Room{ 1,0,1,1, "Three doors are in this room North, East, South. \n~Which path will you take?" };
	Room Room07 = Room{ 1,1,1,1, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room08 = Room{ 1,1,1,1, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room09 = Room{ 1,1,1,1, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room10 = Room{ 0,1,1,1, "Three doors are in this room North, West, and South. \n~Which path will you take?" };
	Room Room11 = Room{ 1,0,1,1, "Three doors are in this room North, East, South. \n~Which path will you take?" };
	Room Room12 = Room{ 1,1,1,1, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room13 = Room{ 1,1,1,1, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room14 = Room{ 1,1,1,1, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room15 = Room{ 0,1,1,1, "Three doors are in this room North, West, and South. \n~Which path will you take?" };
	Room Room16 = Room{ 1,0,1,1, "Three doors are in this room North, East, South. \n~Which path will you take?" };
	Room Room17 = Room{ 1,1,1,1, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room18 = Room{ 1,1,1,1, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room19 = Room{ 1,1,1,1, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room20 = Room{ 0,1,1,1, "Three doors are in this room North, West, and South. \n~Which path will you take?" };
	Room Room21 = Room{ 1,0,0,1, "Only two doors in this room, you may go East and South. \n~Which path will you take?" };
	Room Room22 = Room{ 1,1,1,0, "Three doors are in this room, you may go West, North, and East. \n~Which path will you take?" };
	Room Room23 = Room{ 1,1,1,0, "Three doors are in this room, you may go West, North, and East. \n~Which path will you take?" };
	Room Room24 = Room{ 1,1,1,0, "Three doors are in this room, you may go West, North, and East. \n~Which path will you take?" };
	Room Room25 = Room{ 1,0,0,1, "You encounter the great big huge giant boss called great big huge giant boss!" };
	Room Rooms[5][5] =
	{
		{ Room01,Room02,Room03,Room04,Room05 },
		{ Room06,Room07,Room08,Room09,Room10 },
		{ Room11,Room12,Room13,Room14,Room15 },
		{ Room16,Room17,Room18,Room19,Room20 },
		{ Room21,Room22,Room23,Room24,Room25 }
	};
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			Rooms[j][i].roomInfo();
			Sleep(200);
		}
	}
	system("pause");
	return 0;
}
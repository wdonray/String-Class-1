#include<iostream>
#include"MyString.h"
#include <time.h>
#include "Room.h"
#include "Enemy.h"
#include <Windows.h>

int main()
{
	srand(time(NULL));
	bool DidYouWin = false;
	std::cout << "			---------------------------			\n			!Welcome to Bright Souls 3! \n			--------------------------- \n \nThe map is hidden if you would like a map create it yourself (By Playing a lot) \n \n~RULES: To Move in any direction just type it \n(EXAMPLE: To move north, type 'north') and so forth...\nWARNING: If you are impatient and just spam Enter, game will close! \n \n		*Press 'E' to enter the game or 'Q' to quit*" << std::endl;
	char go;
	std::cin >> go;
	std::cin.ignore();
	while (go != 'Q' && go != 'E')
	{
		std::cout << "Try again... Make sure the 'E' is capitalized \n";
		std::cin >> go;
		std::cin.ignore();
	}
	if (go == 'E')
	{
		system("cls");
		std::cout << "You fool... *Sighhh* Now what is your name? \n-->";
	}
	else if (go == 'Q')
	{
		return 0;
	}
	//Setting a username that I can call the variable m_name anywhere
	char m_name[255];
	std::cin.getline(m_name, 255);
	Hero User = Hero(m_name, 0, 0, 0, 0);
	system("cls");
	std::cout << "Hello " << m_name << ", and welcome to your despair." << "\n \n";
	Sleep(800);
	std::cout << "You were thrown into this death trap for no reason. You must find the exit in \norder to live... Enjoy." << "\n \n";
	int CountDown = 5;
	std::cout << "Countdown until game starts: ";
	//A simple countdown
	while (CountDown > 0) 
	{
		Sleep(1100);
		std::cout << CountDown << " ";
		CountDown--;
	}
	system("cls");
	//Creating each individual rooms using bools to decide what they have and do not have
	Room Room01 = Room{ 1,0,0,1,0,0,0,0,0,0,  "Only two doors are in this room, you may go East and South. \n~Which path will you take?" };
	Room Room02 = Room{ 1,1,0,1,0,0,0,0,0,0, "The room is empty... For now. \n \nThree doors are in this room East, South, and West. \n~Which path will you take?" };
	Room Room03 = Room{ 1,1,0,1,0,0,0,0,0,0, "Three doors are in this room East, South, and West. \n~Which path will you take?" };
	Room Room04 = Room{ 1,1,0,1,0,0,0,0,0,0, "			 -- WARNING -- WARNING -- 			\n \nThree doors are in this room East, South, and West. \n~Which path will you take?" };
	Room Room05 = Room{ 1,0,0,1,0,0,0,0,1,0, "" };
	Room Room06 = Room{ 1,0,1,1,0,0,0,0,0,0, "Three doors are in this room North, East, South. \n~Which path will you take nerd?" };
	Room Room07 = Room{ 1,1,1,1,0,0,0,1,0,0, "\nFour doors are here go anywhere you please. \n~Which path shall you take? \n" };
	Room Room08 = Room{ 1,1,1,1,1,0,0,0,0,0, "\n Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room09 = Room{ 1,1,1,1,0,1,0,0,0,0, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room10 = Room{ 0,1,1,1,0,0,0,0,0,0, "			 -- WARNING -- WARNING -- 			\n \nThree doors are in this room North, West, and South. \n~Which path will you take?" };
	Room Room11 = Room{ 1,0,1,1,0,0,0,0,0,0, "Three doors are in this room North, East, South. \n~Which path will you take?" };
	Room Room12 = Room{ 1,1,1,1,0,0,0,0,0,0, "Four doors are here go anywhere you please. *Giggles* \n~Which path shall you take?" };
	Room Room13 = Room{ 1,1,1,1,0,0,0,0,1,0, "Want to hear a joke? \n" };
	Room Room14 = Room{ 1,1,1,1,0,0,0,0,0,0, "Four doors are here go anywhere you please. *Giggles* \n~Which path shall you take?" };
	Room Room15 = Room{ 0,1,1,1,0,0,0,0,0,0, "Three doors are in this room North, West, and South. \n~Which path will you take?" };
	Room Room16 = Room{ 1,0,1,1,0,0,1,0,0,0, "			 -- WARNING -- WARNING -- 			" };
	Room Room17 = Room{ 1,1,1,1,1,0,0,0,0,0, "\n Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room18 = Room{ 1,1,1,1,0,0,0,0,0,0, "Four doors are here go anywhere you please. *Giggles* \n~Which path shall you take?" };
	Room Room19 = Room{ 1,1,1,1,0,0,0,0,0,0, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room20 = Room{ 0,1,1,1,0,0,0,0,0,0, "Three doors are in this room North, West, and South. \n~Which path will you take?" };
	Room Room21 = Room{ 1,0,0,1,0,0,0,0,1,0, "" };
	Room Room22 = Room{ 1,1,1,0,0,0,0,0,0,0, "			 -- WARNING -- WARNING -- 			\n \nThree doors are in this room, you may go West, North, and East. \n~Which path will you take?" };
	Room Room23 = Room{ 1,1,1,0,0,0,0,0,0,0, "Three doors are in this room, you may go West, North, and East. \n~Which path will you take?" };
	Room Room24 = Room{ 1,1,1,0,0,0,0,0,0,0, "Three doors are in this room, you may go West, North, and East. \n~Which path will you take?" };
	Room Room25 = Room{ 0,0,0,0,0,0,0,0,0,1, "" };
	Room Rooms[5][5] =
	{
		{ Room01,Room02,Room03,Room04,Room05 },
		{ Room06,Room07,Room08,Room09,Room10 },
		{ Room11,Room12,Room13,Room14,Room15 },
		{ Room16,Room17,Room18,Room19,Room20 },
		{ Room21,Room22,Room23,Room24,Room25 }
	};
	while (DidYouWin == false)
	{
		std::cout << std::endl;
		Rooms[User.m_heroY][User.m_heroX].PrintInfo();
		char Response[255];
		std::cout << "\n->";
		std::cin.getline(Response, 255);
		system("cls");
		MyString PResponse = MyString(Response);
		//If the user presses Enter key without typing anything in game will close used this to fix a few errors
		if (PResponse.getLength() == 0)
		{
			break;
		}
		PResponse.ToLower();
		if (User.Response(PResponse, Rooms) == 0)
		{
			break;
		}
	}

	system("pause");
	return 0;
}
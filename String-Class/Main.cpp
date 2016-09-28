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
	std::cout << "!Welcome to Death and Despair! \n \nThe map is hidden if you would like a map create it yourself (By Playing a lot) \n~RULES: To Move in any direction just type it \n(EXAMPLE: To move north, type 'north') and so forth... \n \n*Press 'E' to enter the game or 'Q' to quit*" << std::endl;
	char go;
	std::cin >> go;
	std::cin.ignore();
	while (go != 'Q' && go != 'E')
	{
		std::cout << "Try again...";
		std::cin >> go;
		std::cin.ignore();
	}
		if (go == 'E')
		{
			std::cout << "You fool... *Sighhh* Now what is your name? \n";
		}
		else if (go == 'Q')
		{
			return 0;
		}
	char m_name[] = { "" };
	std::cin.getline(m_name, 255);
	Hero User = Hero(m_name, 0, 0, 0, 0);
	system("cls");
	std::cout << "Hello " << m_name << ", and welcome to your despair." << "\n \n";
	Sleep(800);
	std::cout << "You were thrown into this death trap for no reason. You must find the exit in \norder to live... Enjoy." << "\n";
	Room Room01 = Room{ 1,0,0,1,0,0,0,  "Only two doors are in this room, you may go East and South. \n~Which path will you take?" };
	Room Room02 = Room{ 1,1,0,1,0,0,0, "The room is empty... For now. \n \nThree doors are in this room East, South, and West. \n~Which path will you take?" };
	Room Room03 = Room{ 1,1,0,1,0,0,0, "Three doors are in this room East, South, and West. \n~Which path will you take?" };
	Room Room04 = Room{ 1,1,0,1,0,0,0, "RNING -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING -- WARNI\n \nThree doors are in this room East, South, and West. \n~Which path will you take?" };
	Room Room05 = Room{ 1,0,0,1,0,0,0, "Only two doors are in this room, you may go East and South. \n~Which path will you take?" };
	Room Room06 = Room{ 1,0,1,1,0,0,0, "Three doors are in this room North, East, South. \n~Which path will you take nerd?" };
	Room Room07 = Room{ 1,1,1,1,0,0,1, "There seems to be two weapons of some sort in this room \nA Mace and a Stick? \nIf you would like one, type Take and then your weapon of choice, if not ignore. (EXAMPLE: Take Mace) \n \nFour doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room08 = Room{ 1,1,1,1,1,0,0, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room09 = Room{ 1,1,1,1,0,1,0, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room10 = Room{ 0,1,1,1,0,0,0, "Three doors are in this room North, West, and South. \n~Which path will you take?" };
	Room Room11 = Room{ 1,0,1,1,0,0,0, "Three doors are in this room North, East, South. \n~Which path will you take?" };
	Room Room12 = Room{ 1,1,1,1,0,0,0, "Four doors are here go any.where you please. \n~Which path shall you take?" };
	Room Room13 = Room{ 1,1,1,1,0,1,0, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room14 = Room{ 1,1,1,1,0,0,0, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room15 = Room{ 0,1,1,1,0,0,0, "Three doors are in this room North, West, and South. \n~Which path will you take?" };
	Room Room16 = Room{ 1,0,1,1,0,1,0, "Three doors are in this room North, East, South. \n~Which path will you take?" };
	Room Room17 = Room{ 1,1,1,1,1,0,0, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room18 = Room{ 1,1,1,1,0,0,0, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room19 = Room{ 1,1,1,1,1,0,0, "Four doors are here go anywhere you please. \n~Which path shall you take?" };
	Room Room20 = Room{ 0,1,1,1,0,0,0, "Three doors are in this room North, West, and South. \n~Which path will you take?" };
	Room Room21 = Room{ 1,0,0,1,0,0,0, "Only two doors are in this room, you may go East and South. \n~Which path will you take?" };
	Room Room22 = Room{ 1,1,1,0,0,0,0, "Three doors are in this room, you may go West, North, and East. \n~Which path will you take?" };
	Room Room23 = Room{ 1,1,1,0,0,0,0, "Three doors are in this room, you may go West, North, and East. \n~Which path will you take?" };
	Room Room24 = Room{ 1,1,1,0,0,0,0, "Three doors are in this room, you may go West, North, and East. \n~Which path will you take?" };
	Room Room25 = Room{ 1,0,0,1,1,0,0, "You encounter the great big huge giant boss called great big huge giant boss!" };
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
		Rooms[User.m_heroY][User.m_heroX].PrintInfo();
		char Response[255];
		std::cin.getline(Response, 255);
		system("cls");
		MyString PResponse = MyString(Response);
		PResponse.ToLower();

		if (PResponse.subString("north") == true && Rooms[User.m_heroY][User.m_heroX].m_NDoor == true)
		{
			User.m_North();
		}
		else if (PResponse.subString("east") == true && Rooms[User.m_heroY][User.m_heroX].m_EDoor == true)
		{
			User.m_East();
		}
		else if (PResponse.subString("south") == true && Rooms[User.m_heroY][User.m_heroX].m_SDoor == true)
		{
			User.m_South();
		}
		else if (PResponse.subString("west") == true && Rooms[User.m_heroY][User.m_heroX].m_WDoor == true)
		{
			User.m_West();
		}
		else if (PResponse.subString("Take") == true) 
		{
			if (PResponse.subString("Mace") && Rooms[User.m_heroY][User.m_heroX].m_Weaponin == true)
			{
				std::cout << "Of course... You picked the mace, what a surprise..." << std::endl;
				User.m_weaponM = true;
			}
			else if (PResponse.subString("Stick") && Rooms[User.m_heroY][User.m_heroX].m_Weaponin == true)
			{
				std::cout << "GREAT CHOICE! YOU GOT DE FREAKIN STICK FROM DE GODS!!" << std::endl;
				User.m_weaponS = true;
			}
		}
		else if (PResponse.subString("Attack"))
		{
			if (User.m_weaponM == false || User.m_weaponS == false)
			{
				std::cout << "Yo, how you gona kill this thing with your bare hands... YOU DEAD." << std::endl;
				Sleep(2500);
				return 0;
			}
			else if (User.m_weaponM == true)
			{
				std::cout << "You fought a long battle.. however a Mace can't kill this thing... YOU DEAD." << std::endl;
				Sleep(2500);
				return 0;
			}
			else if (User.m_weaponS == true)
			{
				std::cout << "K.O!! REKT!!! OMG THE STICK DESTROYS ANYTHING IT TOUCHES!!" << std::endl;
			}
		}
	}
	/*Enemy first = Enemy(500, 50);
	Enemy second = Enemy(450, 60);
	std::cout << first.m_hp << "\n";
	std::cout << second.m_hp << "\n";
	for (int i = 0; i < 5; i++)
	{
		first.attack(second);
		std::cout << first.m_hp << "\n";
		std::cout << second.m_hp << "\n";
	}*/
	system("pause");
	return 0;
}
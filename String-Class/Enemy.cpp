#include <iostream>
#include<time.h>
#include"Enemy.h"
#include <Windows.h>
#include "Room.h"
Enemy::Enemy(int h, int d)
{
	m_hp = h;
	m_damage = d;
}

Hero::Hero(char * name, bool weaponM, bool weaponS, int heroX, int heroY)
{
	m_name = name;
	m_weaponM = weaponM;
	m_weaponS = weaponS;
	m_heroX = heroX;
	m_heroY = heroY;
}
int Hero::m_North()
{
	m_heroY--;
	return m_heroY;
}
int Hero::m_East()
{
	m_heroX++;
	return m_heroX;
}
int Hero::m_South()
{
	m_heroY++;
	return m_heroY;
}
int Hero::m_West()
{
	m_heroX--;
	return m_heroX;
}

void Enemy::attack(Enemy & defender)
{
	this->m_damage = rand() % 45 + 5;
	defender.m_hp -= this->m_damage;
}

int Hero::Response(MyString A, Room Rooms[][5])
{
	if (A.subString("north") == true && Rooms[m_heroY][m_heroX].m_NDoor == true)
	{
		m_North();
	}
	else if (A.subString("east") == true && Rooms[m_heroY][m_heroX].m_EDoor == true)
	{
		m_East();
	}
	else if (A.subString("south") == true && Rooms[m_heroY][m_heroX].m_SDoor == true)
	{
		m_South();
	}
	else if (A.subString("west") == true && Rooms[m_heroY][m_heroX].m_WDoor == true)
	{
		m_West();
	}
	else if (A.subString("take") == true)
	{
		if (A.subString("mace") && Rooms[m_heroY][m_heroX].m_Weaponin == true)
		{
			std::cout << "Of course... You picked the mace, what a surprise..." << std::endl;
			Sleep(2500);
			system("cls");
			std::cout << "Four doors are here go anywhere you please. \n~Which path shall you take?" << std::endl;
			m_weaponM = true;
			Rooms[m_heroY][m_heroX].m_Weaponin = false;
		}
		else if (A.subString("stick") && Rooms[m_heroY][m_heroX].m_Weaponin == true)
		{
			std::cout << "GREAT CHOICE! YOU GOT DE FREAKIN STICK FROM DE GODS!!" << std::endl;
			Sleep(2500);
			system("cls");
			std::cout << "Four doors are here go anywhere you please. \n~Which path shall you take?" << std::endl;
			m_weaponS = true;
			Rooms[m_heroY][m_heroX].m_Weaponin = false;
		}
	}
	else if (A.subString("attack") && Rooms[m_heroY][m_heroX].m_Enemyin == true)
	{
		if (m_weaponM == false && m_weaponS == false)
		{
			std::cout << "Yo, how you gona kill this thing with your bare hands... YOU DEAD " << m_name << std::endl;
			Sleep(2500);
			return 0;
		}

		else if (m_weaponM == true)
		{
			std::cout << "You fought a long battle.. however a Mace can't kill this thing... YOU DEAD." << std::endl;
			Sleep(2500);
			return 0;
		}
		else if (m_weaponS == true)
		{
			std::cout << "K.O!! REKT!!! OMG THE STICK DESTROYS ANYTHING IT TOUCHES!!" << std::endl;
			Sleep(2500);
			system("cls");
			std::cout << "Four doors are here go anywhere you please. \n~Which path shall you take?" << std::endl;
			Rooms[m_heroY][m_heroX].m_NDoor = true;
			Rooms[m_heroY][m_heroX].m_EDoor = true;
			Rooms[m_heroY][m_heroX].m_SDoor = true;
			Rooms[m_heroY][m_heroX].m_WDoor = true;
			Rooms[m_heroY][m_heroX].m_Enemyin = false;
		}
	}
	else if (Rooms[m_heroY][m_heroX].m_Jokein == true)
	{
		if (A.subString("1") || A.subString("true"))
		{
			std::cout << "Correct!" << std::endl;
			Sleep(2500);
			system("cls");
			std::cout << "Four doors are here go anywhere you please. \n~Which path shall you take? " << m_name << std::endl;
			Rooms[m_heroY][m_heroX].m_NDoor = true;
			Rooms[m_heroY][m_heroX].m_EDoor = true;
			Rooms[m_heroY][m_heroX].m_SDoor = true;
			Rooms[m_heroY][m_heroX].m_WDoor = true;
			Rooms[m_heroY][m_heroX].m_Jokein = false;
		}
		else
		{
			return 0;
		}

	}
	if (Rooms[m_heroY][m_heroX].m_Death == true)
	{
		std::cout << "RIP " << m_name << " has fallen. " << std::endl;
		Sleep(2500);
		return 0;
	}
	if (Rooms[m_heroY][m_heroX].m_Weaponin == true)
	{
		std::cout << m_name << ", There seems to be two weapons of some sort in this room \nA Mace and a Stick ? \nIf you would like one, type Take and then your weapon of choice, if not ignore. (EXAMPLE: Take Mace)" << "\n \n";
	}
	if (Rooms[m_heroY][m_heroX].m_Enemyin == true)
	{
		std::cout << "OMG, a Cockatrice is snarling and staring at you!\n \n*The doors lock behind you..You must fight* \n \n Type attack... \n \n";
		Rooms[m_heroY][m_heroX].m_NDoor = false;
		Rooms[m_heroY][m_heroX].m_EDoor = false;
		Rooms[m_heroY][m_heroX].m_SDoor = false;
		Rooms[m_heroY][m_heroX].m_WDoor = false;
	}
	if (Rooms[m_heroY][m_heroX].m_Jokein == true)
	{
		std::cout << "Oh my " << m_name << ", you have entered a death room with programming jokes to continue your journey you must answer correctly. \n \nQ: 0 is false and 1 is true, right?" << std::endl;
		Rooms[m_heroY][m_heroX].m_NDoor = false;
		Rooms[m_heroY][m_heroX].m_EDoor = false;
		Rooms[m_heroY][m_heroX].m_SDoor = false;
		Rooms[m_heroY][m_heroX].m_WDoor = false;
	}
	return -1;
}
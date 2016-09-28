#include<iostream>
#include"Room.h"
#include<time.h>
#include<Windows.h>


Room::Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor, bool Enemyin, bool Jokein, bool Weaponin, const char * text)
{
	m_EDoor = EastDoor;
	m_WDoor = WestDoor;
	m_NDoor = NorthDoor;
	m_SDoor = SouthDoor;
	m_Enemyin = Enemyin;
	m_Jokein = Jokein;
	m_Weaponin = Weaponin;
	m_text = text;
}
void Room::PrintInfo()
{
	for (int i = 0; m_text[i] != '\0'; ++i)
	{
		std::cout << m_text[i];
		Sleep(20);
	}
	std::cout << std::endl;
};


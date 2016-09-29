#include<iostream>
#include"Room.h"
#include<time.h>
#include<Windows.h>


Room::Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor, bool Enemyin, bool Jokein, bool Jokein2, bool Weaponin, bool DeathRoom, bool BossRoom, const char * text)
{
	m_EDoor = EastDoor;
	m_WDoor = WestDoor;
	m_NDoor = NorthDoor;
	m_SDoor = SouthDoor;
	m_Enemyin = Enemyin;
	m_Jokein = Jokein;
	m_Jokein2 = Jokein2;
	m_Weaponin = Weaponin;
	m_Death = DeathRoom;
	m_Boss = BossRoom;
	m_text = text;
}
void Room::PrintInfo()
{
	for (int i = 0; m_text[i] != '\0'; ++i)
	{
		std::cout << m_text[i];
		Sleep(12);
	}
	std::cout << std::endl;
};


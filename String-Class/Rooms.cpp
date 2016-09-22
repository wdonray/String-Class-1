#include<iostream>
#include"GClasses.h"


Room::Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor, const char * text)
{
	m_EDoor = EastDoor;
	m_WDoor = WestDoor;
	m_NDoor = NorthDoor;
	m_SDoor = SouthDoor;
	m_text = text;
}
void Room::roomInfo()
{
	std::cout << m_text << std::endl;
};

Enemy::Enemy(int h, int d)
{
	m_hp = m_hp;
	m_damage = m_damage;
}

Hero::Hero(char * name)
{
	m_name = name;
}

void Enemy::attack(Enemy &)
{
	this->m_hp -= rand() % 45 + 5;
}
#include<iostream>
#include"GClasses.h"

Room::Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor)
{
	m_EDoor = EastDoor;
	m_WDoor = WestDoor;
	m_NDoor = NorthDoor;
	m_SDoor = SouthDoor;
}

Enemy::Enemy(int h, int d)
{
	m_hp = m_hp;
	m_damage = m_damage;
}

void Enemy::attack(Enemy &)
{
	this->m_hp -= rand() % 45 + 5;
}
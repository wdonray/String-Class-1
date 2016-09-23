#include <iostream>
#include<time.h>
#include"Enemy.h"
Enemy::Enemy(int h, int d)
{
	m_hp = h;
	m_damage = d;
}

Hero::Hero(char * name, bool weapon, int heroX, int heroY)
{
	m_name = name;
	m_weapon = weapon;
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
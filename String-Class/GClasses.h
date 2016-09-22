#pragma once
class Room
{
public:
	Room() {};
	Room(bool, bool, bool, bool) {};
private:
	bool m_EDoor;
	bool m_WDoor;
	bool m_NDoor;
	bool m_SDoor;
	//Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor);
};

class Enemy
{
public:
	Enemy() {};
	Enemy(int hp, int damage);
	void attack(Enemy &);
	int m_hp;
private: 
	int m_damage;
};

class Hero : Enemy
{
private:
};
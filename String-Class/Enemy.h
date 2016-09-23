#pragma once
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
public:
	Hero() {};
	Hero(char * name, bool weapon, int heroX, int heroY);
	char * m_name;
	int m_North();
	int m_East();
	int m_South();
	int m_West();
	int m_heroX;
	int m_heroY;
private:
	bool m_weapon;
};
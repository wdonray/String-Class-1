#pragma once
class Room
{
public:
	Room() {};
	Room(bool, bool, bool, bool, const char*);
	void PrintInfo();
	bool m_EDoor;
	bool m_WDoor;
	bool m_NDoor;
	bool m_SDoor;
	const char * m_text;
};


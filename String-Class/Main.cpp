#include<iostream>>
#include"Classes.h"
#include"GClasses.h"
int main()
{
	Room Room01 = Room{ 1,0,0,1 };
	Room Room02 = Room{ 1,1,0,1 };
	Room Room03 = Room{ 1,1,0,1 };
	Room Room04 = Room{ 1,1,0,1 };
	Room Room05 = Room{ 1,0,0,1 };
	Room Room06 = Room{ 1,0,1,1 };
	Room Room07 = Room{ 1,1,1,1 };
	Room Room08 = Room{ 1,1,1,1 };
	Room Room09 = Room{ 1,1,1,1 };
	Room Room10 = Room{ 0,1,1,1 };
	Room Room11 = Room{ 1,0,1,1 };
	Room Room12 = Room{ 1,1,1,1 };
	Room Room13 = Room{ 1,1,1,1 };
	Room Room14 = Room{ 1,1,1,1 };
	Room Room15 = Room{ 0,1,1,1 };
	Room Room16 = Room{ 1,0,1,1 };
	Room Room17 = Room{ 1,1,1,1 };
	Room Room18 = Room{ 1,1,1,1 };
	Room Room19 = Room{ 1,1,1,1 };
	Room Room20 = Room{ 0,1,1,1 };
	Room Room21 = Room{ 1,0,0,1 };
	Room Room22 = Room{ 1,1,1,0 };
	Room Room23 = Room{ 1,1,1,0 };
	Room Room24 = Room{ 1,1,1,0 };
	Room Room25 = Room{ 1,0,0,1 };
	Room Rooms[5][5] =
	{
		{ Room01,Room02,Room03,Room04,Room05 },
		{ Room06,Room07,Room08,Room09,Room10 },
		{ Room11,Room12,Room13,Room14,Room15 },
		{ Room16,Room17,Room18,Room19,Room20 },
		{ Room21,Room22,Room23,Room24,Room25 }
	};
	
	system("pause");
	return 0;
}
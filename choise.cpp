#include <iostream>

using namespace std;

enum flags { EXIT = 1, NEXT = 0 };

char Decision();
void menu_Cfrac(int flag);
void menu_Cpoint(int flag);

void SwitchDecision()
{
	int flag = NEXT;

	switch (Decision())
	{
	case '1':
	{
		menu_Cpoint(flag);
	}
	break;

	case '2':
	{
		menu_Cfrac(flag);
	}
	break;
	}
}
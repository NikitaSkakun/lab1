#include <iostream>
#include "Cpoint.h"

using namespace std;

enum flags { EXIT = 1, NEXT = 0 };

////Определение методов Cpoint////
double Cpoint::GetX() { return x; }
double Cpoint::GetY() { return y; }
void Cpoint::SetX(int x) { this->x = x; }
void Cpoint::SetY(int y) { this->y = y; }

void Cpoint::Enter()
{
	cout << "Enter the coordinates of your vector 'a':" << endl;
	cout << "Enter x: ";
	cin >> x;

	cout << "Enter y: ";
	cin >> y;
}
void Cpoint::Light_vector()
{
	cout << "Light vector= " << sqrt((pow(x, 2) + pow(y, 2)));
}
void Cpoint::Rotate_vector()
{
	int h;      //Переменная "угла"
	cout << "\nEnter h(a degrees)= ";
	cin >> h;

	h *= 3, 141592 / 180;
	x_new = x * cos(h) + y * sin(h);
	y_new = y * cos(h) - x * sin(h);

	cout << "Vector coordinates after rotate: a(" << x_new << ";" << y_new << ") " << endl;
}

void menu_Cpoint(int flag)
{
	Cpoint vector;
	for (;;)
	{
		vector.Enter();
		vector.Light_vector();
		vector.Rotate_vector();
		cout << "\nEnter 1 to exit cycle or something to continue: ";
		cin >> flag;
		cout << endl;

		if (flag == 1)
		{
			cout << "\nYou outed of the cycle" << endl;
			cout << "_________________________________________________________________" << endl << endl;
			break;
		}
	}
}
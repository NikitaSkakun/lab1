#include <iostream>
#include "Cfrac.h"

using namespace std;

enum flags { EXIT = 1, NEXT = 0 };
bool flags;

////Определение методов Cfrac////
void Cfrac::Enter_value()
{
	cout << "Enter numerator= ";
	cin >> p;

	cout << endl;

	cout << "Enter denominator= ";
	cin >> q;
	while (q == 0)
	{
		cout << "Делить на ноль нельзя! Введите другое значение в знаменатель: ";
		cin >> q;
	}

	cout << endl;
}
void Cfrac::Fraction()
{
	cout << "Your fraction " << p << "/" << q << "=" << (double)p / q << endl;
}
void Cfrac::Reduction_Fraction()
{
	if (q == 1)
	{
		cout << "\nReduction fraction =" << p << "/" << q << "=" << p << endl;
		return;
	}

	if (q == -1)
	{
		if (p < 0)
		{
			cout << "\nReduction fraction =" << p << "/" << q << "= " << -p << endl;
			return;
		}

		if (p > 0)
		{
			cout << "\nReduction fraction =" << p << "/" << q << "= " << -p << endl;
			return;
		}

	}

	for (int i = 9; 1 < i; i--) // сокращение дроби начинается с 9,потом с 8 и т.д чтобы нормально сократилось
		if (p % i == 0 && q % i == 0)
		{
			while (p % i == 0 && q % i == 0)
			{
				q /= i;
				p /= i;
			}
		}

	if (q == 1)
	{
		cout << "\nReduction fraction =" << p << "/" << q << "=" << p << endl;
		return;
	}

	if (q == -1)
	{
		cout << "\nReduction fraction =" << p << "/" << q << "=" << -p << endl;
		return;
	}

	if (q < -1)
	{
		if (p > 0)
		{
			cout << "\nReduction fraction =" << -p << "/" << -q << endl;
			return;
		}

		if (p < 0)
		{
			cout << "\nReduction fraction =" << -p << "/" << -q << endl;
			return;
		}
	}

	cout << "\nReduction fraction =" << p << "/" << q << endl;
}

void menu_Cfrac(int flag)
{
	Cfrac fraction;
	for (;;)
	{
		fraction.Enter_value();
		fraction.Fraction();
		fraction.Reduction_Fraction();

		cout << "\nEnter 1 to exit cycle or something to continue: ";
		cin >> flag;
		cout << endl;

		if (flag == EXIT)
		{
			cout << "\nYou outed of the cycle" << endl;
			cout << "_________________________________________________________________" << endl << endl;
			break;
		}
	}
}
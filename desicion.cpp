#include <iostream>

using namespace std;

char Decision()
{
	char x = '1';
	do
	{
		cout << "������� 1, ���� ������ �������� � 1�� ��������" << endl;
		cout << "������� 2, ���� ������ �������� �� 2�� ��������" << endl;
		cin >> x;
	} while (x != '1' && x != '2');
	return x;
}
#include <iostream>

using namespace std;

char Decision()
{
	char x = '1';
	do
	{
		cout << "¬ведите 1, если хотите работать с 1ым разделом" << endl;
		cout << "¬ведите 2, если хотите работать со 2ым разделом" << endl;
		cin >> x;
	} while (x != '1' && x != '2');
	return x;
}
#include <iostream>

using namespace std;

class Cpoint
{
private:

	double x;
	double y;

	double x_new;
	double y_new;

public:
	double GetX();
	double GetY();

	void SetX(int x);
	void SetY(int y);

	void Enter();

	void Light_vector();

	void Rotate_vector();

};

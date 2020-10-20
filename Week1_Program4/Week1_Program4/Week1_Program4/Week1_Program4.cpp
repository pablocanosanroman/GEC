#include <iostream>
using namespace std;

int main()
{
	typedef int cost;

	enum CarMake
	{
		Ford = 1,
		FIAT,
		TESLA,
		VW,
		BMW,
		ASTONMARTIN,
		HONDA,
		NISSAN,
		TOYOTA,
		AUDI,
		JAGUAR,
		DODGE
	};

	cost myNum = 13000;

	cout << "The cost of my car is: " << myNum << endl;
	cout << "My car id is: " << HONDA << endl;

	return 0;
}
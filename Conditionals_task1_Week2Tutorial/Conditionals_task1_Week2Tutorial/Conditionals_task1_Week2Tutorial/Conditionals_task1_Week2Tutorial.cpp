#include <iostream>
using namespace std;

int main()
{
	int num1 = 12, num2 = 5, num3 = 7;
	bool a = true;
	if (a)
	{
		num1++;
		num2 += 5;
	}
	num3 *= 2;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;

	return 0;
}
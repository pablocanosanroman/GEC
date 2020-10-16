#include <iostream>
using namespace std;

int main()
{
	float num1 = 1;
	float num2 = 1;
	float num3 = 1;
	float numSum, numAverage;
	
	cout << "Please enter 2 numbers" << endl;
	cin >> num1;
	cin >> num2;

	float Sum = num1 + num2;
	float Average = (Sum) / 2;

	cout << "Sum = " << Sum << endl;
	cout << "Average = " << Average << endl;

	cout << "Please enter another number" << endl;
	cin >> num3;

	numSum = Sum + num3;
	numAverage = (numSum) / 2;

	cout << "Next Sum = " << numSum << endl;
	cout << "Next Average = " << numAverage << endl;

	for (int num3 = 1; num3 != 0; num3 == num3)
	{
		cout << "Please enter another number" << endl;
		cin >> num3;

		numSum = numSum + num3;
		numAverage = (numSum) / 2;

		cout << "Next Sum = " << numSum << endl;
		cout << "Next Average = " << numAverage << endl;

	}

	return 0;

}


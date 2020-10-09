#include <iostream>
using namespace std;

int main()
{
	float mySavings = 2000;
	float yourPercentage = 50;
	float yourShare = (mySavings * (yourPercentage / 100));

	cout << "Your share: " << yourShare << endl;

	return 0;

}
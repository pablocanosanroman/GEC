#include <iostream>
using namespace std;

int main()
{
	float Fahrenheit = 95.0f;
	float Celsius = (Fahrenheit - 32) * 0.5556;
	cout << Fahrenheit << " F is equal to " << Celsius << " C." << endl;

	return 0;
}
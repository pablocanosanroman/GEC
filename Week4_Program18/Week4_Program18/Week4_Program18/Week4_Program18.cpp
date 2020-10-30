#include <iostream>
using namespace std;

int smallestNumber(int a, int b);

int main()
{
	int num, num1;
	

	cout << "Please write 2 integer numbers\nFirst number" << endl;
	cin >> num;
	cout << "Second number" << endl;
	cin >> num1;
	
	smallestNumber(num, num1);
	
	
	return 0;

}

int smallestNumber(int a, int b)
{
	if (a < b)
	{
		cout << "The smallest number is: " << a << endl;
		return a;
	}
	else if (b < a)
	{
		cout << "The smallest number is: " << b << endl;
		return b;
	}
	if (a = b)
	{
		cout << "Both numbers are equal" << endl;
		return 0;
	}
}

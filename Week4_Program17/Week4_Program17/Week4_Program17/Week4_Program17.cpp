#include <iostream>
using namespace std;

void addTwo(int num);

int main()
{
	int myNum = 6;
	cout << "MAIN [before]: myNum = " << myNum << endl;

	addTwo(myNum);
	cout << "MAIN [after]: myNum = " << myNum << endl;

	return 0;
}

void addTwo(int num)
{
	//add 2 to the num
	num += 2;

	//output the contents
	cout << "FUNCTION: num = " << num << endl;
}
#include <iostream>
using namespace std;

void outputResults(int a, int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
string NumberAnalysis(int a, bool OddOrEven);


int main()
{
	int questions;
	int Ans;
	int cEven = 0;
	int cOdd = 0;
	bool TypeOfNumber = false;
	int sumOdd = 0;
	int sumEven = 0;

	cout << "Please enter 10 integer numbers\nNumber 1" << endl;
	cin >> Ans;

	outputResults(Ans, cOdd, sumOdd, cEven, sumEven);

	if (Ans % 2 == 0)
	{
		cEven++;
		sumEven = sumEven + Ans;
	}
	else
	{
		cOdd++;
		sumOdd = sumOdd + Ans;
	}

	cout << NumberAnalysis(Ans, TypeOfNumber) << endl;

	for (questions = 2; questions < 11; questions++)
	{
		cout << " Number " << questions << endl;
		cin >> Ans;
		
		NumberAnalysis(Ans, TypeOfNumber);

		cout << NumberAnalysis(Ans, TypeOfNumber) << endl;

		if (Ans % 2 == 0)
		{
			cEven++;
			sumEven = sumEven + Ans;
		}
		else
		{
			cOdd++;
			sumOdd = sumOdd + Ans;
		}

		outputResults(Ans, cOdd, sumOdd, cEven, sumEven);

	}

	cout << "There are " << cEven << " even numbers. " << endl;
	cout << "Addition of all the even numbers: " << sumEven << endl;
	cout << "There are " << cOdd << " odd numbers. " << endl;
	cout << "Addition of all the odd numbers: " << sumOdd << endl;

	return 0;
}

void outputResults( int a, int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	if (a % 2 == 0)
	{
		numOfEven++;
		evenTotal = evenTotal + a;
	}
	else
	{
		numOfOdd++;
		oddTotal = oddTotal + a;
	}


}


string NumberAnalysis(int a, bool OddOrEven)
{
	if (a % 2 == 0)
	{
		//The number is even
		OddOrEven = true;
		return "This number is even";
		

	}
	else
	{
		//The number is odd
		OddOrEven = false;
		return "This number is odd";
		
	}

}





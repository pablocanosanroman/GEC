#include <iostream>
using namespace std;

int main()
{
	int questions;
	int Ans = 1;
	int playerLife = 100;
	int RemainLife;


	cout << "Player Life = " << playerLife << endl;

	cout << "Question 1: How much shall I deal?\n";
	cin >> Ans;

	RemainLife = playerLife - Ans;

	cout << "Your life is now: " << RemainLife << endl;

	for (questions = 2; questions < 11; questions++)
	{
		if (RemainLife > 0)
		{
			
			cout << "Question " << questions << ": How much shall I deal?\n";
			cin >> Ans;

			RemainLife = RemainLife - Ans;
			cout << "Your life is now: " << RemainLife << endl;
		}
		else
		{
			cout << "Early end. Player Died!" << endl;
			break;
		}

	}

	if (RemainLife > 0)
	{
		cout << "All questions asked. Player survived!" << endl;
	}

}


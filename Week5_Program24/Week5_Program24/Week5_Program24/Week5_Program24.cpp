#include <iostream>
using namespace std;

char card_Faces[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
int board_cards[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
bool cards_found[10] = { false, false, false, false, false, false, false, false, false, false };

int attempt_count = 1, score = 0;
bool playing = true;

void DrawBoard();
void DrawBoard(int input1, int input2);

int main()
{
	while (playing)
	{
		DrawBoard();

		int guess1, guess2;

		cout << "\nPlease enter your first guess: ";
		cin >> guess1;
		cout << "Please enter now your second guess: ";
		cin >> guess2;

		DrawBoard(guess1, guess2);

		for (int i = 0; i <= 10; i++)
		{
			if (guess1 == board_cards[i - 1] || guess2 == board_cards[i - 1])
			{
				cards_found[i - 1] = true;
				score++;
			}
			
		}

		if (score >= 5)
		{
			cout << endl << "Congratulations! You have won the game!" << endl;
			playing = false; 
		}
		else
		{
			attempt_count++;
		}
	}
}

void DrawBoard()
{
	system("cls"); //this will clear the board of any turns

	cout << "Total attempts: " << attempt_count << endl;

	for (int i = 0; i < 10; i++)
	{
		if (cards_found[i])
		{
			cout << "[" << i + 1 << "]";
		}
		else
		{
			cout << "[" << card_Faces[i] << "]";
		}

		if (i == 4)
		{
			cout << endl;
		}
	}
}

void DrawBoard(int input1, int input2)
{
	system("cls"); //this will clear the board of any turns

	cout << "Total attempts: " << attempt_count << endl;

	for (int i = 0; i < 10; i++)
	{
		if (cards_found[i] || (input1 == i + 1 || input2 == i + 1))
		{
			cout << "[" << i + 1 << "]";
		}
		else
		{
			cout << "[" << card_Faces[i] << "]";
		}

		if (i == 4)
		{
			cout << endl;
		}
	}
}



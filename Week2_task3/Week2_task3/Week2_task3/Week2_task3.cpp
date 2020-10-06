#include <iostream>
using namespace std;

int main()
{
	//int player_input;
	//cout << "enter 0 or 1..." << endl;
	////take in input
	//cin >> player_input;

	//switch (player_input)
	//{
	//case 0:
	//	//add code if 0
	//	break;
	//case 1:
	//	//add code if 1
	//	break;
	//default:
	//	//add code if none
	//	break;
	//}
	char play_again;
	cout << "Do you want to play again, Y or N?" << endl;

	cin >> play_again;

	switch (play_again)
	{
	case 'Y':
		cout << "You chose to play again" << endl;
		break;

	case 'N':
		cout << "Goodbye" << endl;
		break;
	default:
		cout << "That's not Y or N" << endl;
	}
}
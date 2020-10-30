#include <iostream>
using namespace std;

int Player_Health = 1000;
int Enemy_Health = 2000;
bool Playing = true;

void attack_choice(int num1);
bool player_state();

int main()
{
	int player_choice;
	
	while (Playing)
	{
		
		
		cout << "Be careful! You have met a troll\n\nYou have 3 options to attack the troll\n\n 1. use sword\n 2. use magic\n 3. use axe" << endl;
		cout << "Each choice have different effects" << endl;
		cin >> player_choice;

		attack_choice(player_choice);
		Playing = player_state();
		

		
	
	
	} 

	return 0;
}

void attack_choice(int num1)
{
	const int sword_damage = 300;
	const int magic_damage = 650;
	const int axe_damage = 450;
	const int troll_sword = 350;
	const int troll_magic = 50;
	const int troll_axe = 100;

	switch (num1)
	{
	case 1:
		Enemy_Health = Enemy_Health - sword_damage;

		Player_Health = Player_Health - troll_sword;

		cout << "You have hit the troll!" << endl;

		cout << "You have been hit by the troll!" << endl;

		if (Player_Health < 0)
		{
			Player_Health = 0;
		}
		else if (Enemy_Health < 0)
		{
			Enemy_Health = 0;
		}

		cout << "Your current health is: " << Player_Health << " hp" << endl;

		cout << "The enemy health is: " << Enemy_Health << " hp" << endl;

		break;

	case 2:
		Enemy_Health = Enemy_Health - magic_damage;

		Player_Health = Player_Health - troll_magic;

		cout << "You have hit the troll!" << endl;

		cout << "You have been hit by the troll!" << endl;

		if (Player_Health < 0)
		{
			Player_Health = 0;
		}
		else if (Enemy_Health < 0)
		{
			Enemy_Health = 0;
		}

		cout << "Your current health is: " << Player_Health << " hp" << endl;

		cout << "The enemy health is: " << Enemy_Health << " hp" << endl;

		break;

	case 3:
		Enemy_Health = Enemy_Health - axe_damage;

		Player_Health = Player_Health - troll_axe;

		cout << "You have hit the troll!" << endl;

		cout << "You have been hit by the troll!" << endl;

		if (Player_Health < 0)
		{
			Player_Health = 0;
		}
		else if (Enemy_Health < 0)
		{
			Enemy_Health = 0;
		}

		cout << "Your current health is: " << Player_Health << " hp" << endl;

		cout << "The enemy health is: " << Enemy_Health << " hp" << endl;

		break;

	default:
		cout << "That is not an available weapon" << endl;
		break;


	}
}

bool player_state()
{
	char play_again;

	if (Enemy_Health <= 0)
	{
		cout << "You have killed the troll. Congratulations, you won!" << endl;
		cout << "Do you want to play again? Y/N " << endl;
		cin >> play_again;

		if (play_again == 'Y')
		{
			Enemy_Health = 2000;
			Player_Health = 1000;
			return true;
		}
		else if (play_again == 'N')
		{
			return false;
		
		}
		else
		{
			cout << "That is not Y or N" << endl;
			return false;
			
		}
	}
	else if (Player_Health <= 0)
	{
		cout << "The troll have killed you\n" << endl;
		cout << "Do you want to play again? Y/N " << endl;
		cin >> play_again;

		if (play_again == 'Y')
		{
			Enemy_Health = 2000;
			Player_Health = 1000;
			return true;
		}
		else if (play_again == 'N')
		{
			return false;
		}
		else
		{
			cout << "That is not Y or N" << endl;
			return false;
		}
		

	}

	
}



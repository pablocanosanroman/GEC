#include <iostream>
using namespace std;

int main()
{
    char user_status = 's';
    int user_game_choice = 1;

    cout << "Please tell me your status: 's' for student, 't' for teacher, 'o' for other" << endl;
    cin >> user_status;

    cout << "Which game would you like: '1' or '2'?" << endl;
    cin >> user_game_choice;

    if (user_status == 'o')
    {
        cout << " You are not entitled to a discount, sorry" << endl;
    }
    else if (user_status == 's', 't')
    {
        if (user_game_choice == 1)
        {
            cout << "You can get a 20% discount for this game" << endl;
        }
        else if (user_game_choice == 2)
        {
            cout << "You can get a 10% discount for this game" << endl;
        }
        else
        {
            cout << "That game doesn't exist, please select 1 or 2" << endl;
        }

    }

}


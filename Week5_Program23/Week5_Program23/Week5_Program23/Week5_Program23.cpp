#include <iostream>
using namespace std;
//include the C++ manipulator lib to use setw
#include <iomanip>
using std::setw;

int main()
{
    const int MAX_ITEMS = 5;
    int numItems = 0;
    string inventory[MAX_ITEMS];
    char user_answer;
    inventory[numItems++] = "sword";
    inventory[numItems++] = "battle axe";
    inventory[numItems++] = "healing potion";
    inventory[numItems++] = "dagger";
    inventory[numItems++] = "wizard's staff";

    cout << "Your current inventory is:\n" << endl;
    for (int row = 0; row < 5; row++)
    {
        if (row == 4)
        {
            continue;
        }
        cout << inventory[row] << endl;
    }
    

    cout << "\nYou have picked up a wizard's staff. Would you like to swap it for the dagger in your inventory? Y/N" << endl;
    cin >> user_answer;

    if (user_answer == 'Y')
    {
        cout << "\nYou have left behind your wizard's staff and swap it for the dagger\n" << endl;
        for (int row = 0; row < 5; row++)
        {
            if (row == 4)
            {
                continue;
            }
            cout << inventory[row] << endl;
        }
        cout << "\nYour current equip weapon is: " << inventory[3] << endl;
    }
    else if (user_answer == 'N')
    {
        cout << "\nYou decided to keep the wizard's staff\n" << endl;
        for (int row = 0; row < 5; row++)
        {
            cout << inventory[row] << endl;
        }
        cout << "\nYour current equip weapon is: " << inventory[4] << endl;
    }
    else
    {
        cout << "That is not Y or N" << endl;
    }
   

}


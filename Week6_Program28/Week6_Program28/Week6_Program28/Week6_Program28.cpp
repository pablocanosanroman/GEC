#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    //Vector with the list of objects
    vector<string> Inventory;
    string user_ans;
    int size_of_inventory = 1;
    int user_ans2;

    Inventory.push_back("sword");

    while(size_of_inventory < 3)
    {
        cout << "Type which item you wish to keep: Staff or Knife" << endl;
        getline(cin, user_ans);

        Inventory.push_back(user_ans);

        cout << "Your inventory holds: " << endl;
        for (int i = 0; i < Inventory.size(); i++)
        {
            cout << Inventory[i] << endl;
        }

        size_of_inventory++;

        cout << "Type which item you wish to keep: Healing potion or Fire Spell" << endl;
        getline(cin, user_ans);

        Inventory.push_back(user_ans);
       

        cout << "Your inventory holds: " << endl;
        for (int i = 0; i < Inventory.size(); i++)
        {
            cout << Inventory[i] << endl;
        }

        size_of_inventory++;

        if (size_of_inventory == 3)
        {
            cout << "\nYour inventory is full!!\n" << endl;
        }
    }

    cout << "You have found a magic ring, what would you like to replace in your inventory?\n1: " << Inventory[0] << "\n2: " << Inventory[1] << "\n3: " << Inventory[2] << endl;
    cin >> user_ans2;

    Inventory.erase(Inventory.begin() + (user_ans2 - 1));
    Inventory.push_back("magic ring");
    Inventory[2].swap(Inventory[user_ans2 - 1]);

    cout << "\nYour inventory is now:" << endl;

    for (int i = 0; i < Inventory.size(); i++)
    {
        cout << Inventory[i] << endl;
    }

    cout << "\nYou have been robbed!!" << endl;
    Inventory.clear();
    
    if (Inventory.empty())
    {
        cout << "Your inventory is now" << endl;
        for (int i = 0; i < Inventory.size(); i++)
        {
            cout << Inventory[i] << endl;
        }
        cout << "Empty!" << endl;
    }


    
}

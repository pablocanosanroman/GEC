#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name_initial[2], midname_initial[2], surname[100];

    cout << "Please enter the initial of your first name, then the initial of your middle name and then your entire surname" << endl;
    cout << "Please put a space between the words" << endl;
    cin >> name_initial;
    cin >> midname_initial;
    cin.getline(surname, 100);

    cout << "Initial of your name: " << name_initial<< endl;
    cout << "Initial of your middle name: " << midname_initial<< endl;
    
    
    for (int i = 1; i <= strlen(surname); i++)
    {
        cout << "Your surname is: " << surname << endl;
        break;
    }

    

}


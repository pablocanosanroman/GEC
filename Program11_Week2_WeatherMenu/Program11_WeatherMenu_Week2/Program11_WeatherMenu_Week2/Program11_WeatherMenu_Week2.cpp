#include <iostream>
using namespace std;

int main()
{
    char Weather_Menu;

    cout << "Please choose an option: \n 1. Sunny \n 2. Cloudy \n 3. Raining \n 4. Exit " << endl;

    cin >> Weather_Menu;

    switch (Weather_Menu)
    {
    case '1':
        cout << "Don't forget to take a hat if you are going out." << endl;
        break; 

    case '2':
        cout << "Remember to take a coat." << endl; 
        break;

    case '3':
        cout << "Don't forget the umbrella if you are planning to go outside." << endl;
        break;

    case '4':
        cout << "Ok, see you later." << endl;
        break; 

    default:
        cout << "That is not an option, try again pls." << endl;
    }
}


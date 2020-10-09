#include <iostream>
using namespace std;

int main()
{
    int rain = 1; 
    int snow = 2;
    int weather = 1;
    int temp = 15;

    cout << "Please tell me if it is raining with '1' or snowing with '2'" << endl;
    cin >> weather;
    cout << "What is the temperature in Celsius?" << endl;
    cin >> temp;
    

    if (weather == 1)
    {
        if (temp > 15)
        {
            cout << "You should wear a light raincoat" << endl;

        }
        else 
        {
            cout << "You should wear a thick coat" << endl; 
        }
    
    }
    else if (weather == 2)
    {
        if (temp > 5)
        {
            cout << "You should wear something warm" << endl;
        }
        else if (temp > 0)
        {
            cout << "You should wrap up well" << endl;
        }
        else
        {
            cout << "You should stay home" << endl;
        }
    }
    else
    {
        cout << "Have a nice day" << endl;
    }
}


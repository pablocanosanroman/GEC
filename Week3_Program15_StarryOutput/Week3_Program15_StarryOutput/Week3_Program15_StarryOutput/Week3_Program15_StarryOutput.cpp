#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
   
    
    cout << "Please enter a number between 1 and 10" << endl;
    cin >> num3;
 
    for (num1 = 1; num1 <= num3; num1++)
    {

        for (num2 = 1; num2 <= num1; num2++)
        {
            cout << "* ";
        }

        cout << "\n";
    }
    
    char play_again;
    bool play = true;

    while(play)
    {
        cout << "Do you want another go? Y or N" << endl;
        cin >> play_again;



        switch (play_again)
        {
        case 'Y':

            cout << "Please enter a number between 1 and 10" << endl;
            cin >> num3;

            for (num1 = 1; num1 <= num3; num1++)
            {

                for (num2 = 1; num2 <= num1; num2++)
                {
                    cout << "* ";
                }

                cout << "\n";
            }

            break;


        case 'N':
            play = false;
            cout << "Goodbye";


            break;


        default:
            cout << "That's not Y or N" << endl;
        }
    }

    return 0;

}
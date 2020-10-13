// LectureWeek3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{

    int x = 0;

    cout << "++i:" << endl;

    for (int i = 0; i < 10; ++i)
    {
        cout << i;
    }

    cout << "\ni++:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i;
    }

    cout << "\ni--:" << endl;
    for (int i = 9; i >= 0; i--)
    {
        cout << i;
    }

    cout << "\nwhile loop:" << endl;
    int i = 0;

    while (i < 10)
    {
        cout << "i: " << i << endl;
        i++;
    }

    cout << "\n Nested loops" << endl;

    for (int j = 0; j < 10; j++)
    {
        cout << j << " ";
    }

    cout << endl;

    cout << "\nBreak statements" << endl;

    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i;
    }

    cout << "\nContinue" << endl;

    for (int i = 0; i < 10; i++)
    {
        if (i == 3)
            continue;

        cout << i;
    }
}
    
    



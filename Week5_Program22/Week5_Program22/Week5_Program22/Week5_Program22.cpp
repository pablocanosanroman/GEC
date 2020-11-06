#include <iostream>
using namespace std;
#include <iomanip>
#include <algorithm>
using std::setw;

int main()
{
    int Num1;
    int Num2;
    int Num3;
    int Num4;
    int Num5;
    int largestNum;
    int position;

    cout << "Please enter 5 integer numbers" << endl;
    cin >> Num1;
    cin >> Num2;
    cin >> Num3;
    cin >> Num4;
    cin >> Num5;
    
    int myNums[5] = { Num1, Num2, Num3, Num4, Num5 };

    //Output the array
    cout << "Your numbers" << endl;

    for (int row = 0; row < 5; row++)
    {
        cout << setw(7) << myNums[row] << endl;
    }
    
    //Array Backwards
    cout << "Your numbers backwards" << endl;

    for (int row2 =4; row2>=0; row2--)
    {
        cout << setw(7) << myNums[row2] << endl;
    }

    largestNum = myNums[0];
    for (int i = 0;i < 5;i++)
    {
        if (largestNum < myNums[i])
        {
            largestNum = myNums[i];
            position = i;
        }
    }

    cout << "The largest number on the list is: " << largestNum << endl;
    cout << "The position of this number on the list is: " << (position + 1) << endl;

    return 0;
}


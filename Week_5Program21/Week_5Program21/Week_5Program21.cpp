#include <iostream>
using namespace std;
#include <iomanip>
// setw is the set field width and allows you to define coulm widths
using std::setw;



int main()
{
    int Num1; int Num2; int Num3; int Num4; int Num5; int Num6; int Num7; int Num8; int Num9; int Num10;
    int smallestNumber;

    cout << "Please write 10 integer numbers" << endl;
    cin >> Num1;
    cin >> Num2;
    cin >> Num3;
    cin >> Num4;
    cin >> Num5;
    cin >> Num6;
    cin >> Num7;
    cin >> Num8; 
    cin >> Num9; 
    cin >> Num10;

    double myNums[10] = { Num1, Num2, Num3, Num4, Num5, Num6, Num7, Num8, Num9, Num10};

    cout << "Your numbers are" << endl;

    for (int row = 0; row < 10; row++)
    {
        cout << setw(7) << myNums[row] << endl;
    }

    //This select what number is the smallest one

    smallestNumber = myNums[0];

    for (int i = 0; i < 10; i++)
    {
        if (smallestNumber > myNums[i])
        {
            smallestNumber = myNums[i];
        }
    }

    cout << "The smallest number is: " << smallestNumber << endl;

    return 0;
}
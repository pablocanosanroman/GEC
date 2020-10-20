

#include <iostream>
using namespace std;

bool loveCoding();
void addTwoNums(int num1, int num2);


int main()
{
    if (loveCoding())
    {
        cout << "I love coding C++" << endl;
    }

    addTwoNums(10, 5);

    int my_num1 = 2, my_num2 = 4;

    addTwoNums(my_num1, my_num2);
    addTwoNums(my_num1, 12);

    

    return 0;
}

bool loveCoding()
{
    return true;
}

void addTwoNums(int num1, int num2)
{
    cout << "\n" << num1 << "+" << num2 << " = " << num1 + num2 << endl;
}


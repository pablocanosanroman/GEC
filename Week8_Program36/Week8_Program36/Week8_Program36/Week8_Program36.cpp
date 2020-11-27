// Week8_Program36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void plus25(int& reference);
void minus25(int& reference);

int main()
{
    int num;
    int& rNum = num;

    std::cout << "Please enter an integer number" << std::endl;
    std::cin >> num;

    std::cout << "Your number is: " << num << std::endl;

    plus25(rNum);

    std::cout << "Adding 25, your number is now: " << num << std::endl;

    std::cout << "Please enter another integer number: " << std::endl;
    std::cin >> num;

    std::cout << "Your number is: " << num << std::endl;

    minus25(rNum);

    std::cout << "Subtracting 25, your number is now: " << num << std::endl;




}

void plus25(int& reference)
{
    reference = reference + 25;

}

void minus25(int& reference)
{
    reference = reference - 25;
}

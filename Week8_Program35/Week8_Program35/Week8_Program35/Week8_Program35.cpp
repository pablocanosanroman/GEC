// Week8_Program35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void inputDetails(int* n1, int* n2);

void outputDetails(int& int1, int& int2, int* pointer);

int main()
{
    int num1;
    int num2;
    int* pNum;

    pNum = &num1;

    inputDetails(&num1, &num2);

    
    outputDetails(num1, num2, pNum);
   
    
}

void inputDetails(int* n1, int* n2)
{
    std::cout << "Please enter 2 integer numbers" << std::endl;
    std::cin >> *n1;
    std::cin >> *n2;
}

void outputDetails(int& int1, int& int2, int* pointer)
{
    std::cout << "number 1 value: " << int1 << std::endl;
    std::cout << "number 1 address in memory: " << &int1 << std::endl;
    std::cout << "number 2 value: " << int2 << std::endl;
    std::cout << "number 2 address in memory: " << &int2 << std::endl;
    std::cout << "pointer value: " << pointer << std::endl;
    std::cout << "pointer deferenced value: " << *pointer << std::endl;
    std::cout << "pointer address in memory: " << &pointer << std::endl;
}
#include <iostream>
#include <string>
#include <fstream>
#include "BaseAccount.h"
#include "JuniorAccount.h"
#include "SavingsAccount.h"


enum Account_type {

    GENERAL, JUNIOR, SAVINGS
};

void case_1();
void case_2();
void case_3();

int main()
{
    bool program_running = true;
    bool option1_running = true;
    int selection1;
    int selection2;
    std::ofstream outFile;

    while (program_running)
    {
        std::cout << "Please select one option:" << std::endl;
        std::cout << "1. Open a new account\n2. View an account\n3. Close an account\n4. Exit program" << std::endl;
        std::cin >> selection1;

        if (selection1 == 1)
        {
            while (option1_running)
            {
                std::cout << "Now select one of this options:" << std::endl;
                std::cout << "1. General account\n2. Junior account\n3. Savings account\n4. Return to main menu" << std::endl;
                std::cin >> selection2;

                if (selection2 == 1)
                {
                    outFile.open("Data", std::ios::in | std::ios::app);
                    case_1();
                    outFile.close();
                    break;
                    
                }
                else if (selection2 == 2)
                {
                    outFile.open("Data", std::ios::in | std::ios::app);
                    case_2();
                    outFile.close();
                    break;
                }
                else if (selection2 == 3)
                {
                    outFile.open("Data", std::ios::in | std::ios::app);
                    case_3();
                    outFile.close();
                    break;
                }
                else if (selection2 == 4)
                {
                    option1_running = false;
                    break;
                }
                
            }
           
            
        }
        else if (selection1 == 2)
        {
            int bankAccountNumber;
            std::cout << "Please enter your bank account here." << std::endl;
            std::cin >> bankAccountNumber;
            
           

        }
        else if (selection1 == 3)
        {

        }
        else if (selection1 == 4)
        {
            program_running = false;
        }
        else
        {
            std::cout << "Please, enter a number between 1 and 4." << std::endl;
        }

    }
    
}

void case_1()
{
    
    BaseAccount::BaseAccount();
            
}

void case_2()
{
    JuniorAccount::JuniorAccount();
}

void case_3()
{
    SavingAccount::SavingAccount();
}
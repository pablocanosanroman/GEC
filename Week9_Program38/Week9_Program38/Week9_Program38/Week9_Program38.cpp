// Week9_Program38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

struct user_details
{
    std::string name;

    int account_number;

    double balance;

};
int main()
{
    user_details user_input[100];
   

    bool while_loop1 = true;
    bool while_loop2 = true;

    int user_choice;
    char details_repetition;

    std::ofstream outFile;
   

    while(while_loop1)
    {
        std::cout << "Please select one of these options\n1.Enter new details\n2.Display the contents of the file\n3.Display accounts that have a balance over 10,000\n4.Exit the program" << std::endl;
        std::cin >> user_choice;

        if (user_choice == 1)
        {
            while_loop2 = true;
            outFile.open("Holding_data", std::ios::in | std::ios::app);

            while (while_loop2)
            {
                if (outFile.is_open())
                {
                    for (int i = 0; i < 100; i++)
                    {
                        std::cout << "Please put your details here:\n\nName: ";
                        std::cin >> user_input[i].name;

                        std::cout << "\nAccount number: ";
                        std::cin >> user_input[i].account_number;

                        std::cout << "\nBalance: ";
                        std::cin >> user_input[i].balance;

                        outFile << "Name: " << user_input[i].name << std::endl;
                        outFile << "Account number: " << user_input[i].account_number << std::endl;
                        outFile << "Balance: " << user_input[i].balance << std::endl;

                        std::cout << "Would you like to enter more details? Y/N" << std::endl;
                        std::cin >> details_repetition;

                        if (details_repetition == 'N')
                        {
                            while_loop2 = false;
                            break;
                            break;
                        }
                    }
                    

                }
            }

            outFile.close();
        }
        else if (user_choice == 2)
        {
            while_loop2 = true;

            outFile.open("Holding_data", std::ios::out | std::ios::app);

            if (outFile.is_open())
            {
                while (while_loop2)
                {
                    for (int i = 0; i < 100; i++)
                    {
                        std::cout << "Name: " << user_input[i].name << std::endl;
                        std::cout << "Account number: " << user_input[i].account_number << std::endl;
                        std::cout << "Balance: " << user_input[i].balance << std::endl;

                        if (&user_input[i].name && &user_input[i].account_number && &user_input[i].balance)
                        {
                            break;
                        }
                    }
                    

                    while_loop2 = false;
                }

                

                

            }
            outFile.close();

        }
        else if (user_choice == 3)
        {
            while_loop2 = true;

            outFile.open("Holding_data", std::ios::out | std::ios::app);

            if (outFile.is_open())
            {
                while (while_loop2)
                {
                    for (int i = 0; i < 100; i++)
                    {
                        if (user_input[i].balance > 10000)
                        {
                            std::cout << "Name: " << user_input[i].name << std::endl;
                            std::cout << "Account number: " << user_input[i].account_number << std::endl;
                            std::cout << "Balance: " << user_input[i].balance << std::endl;
                        }
                        
                    }
                   
                    

                    while_loop2 = false;
                }

            }

            outFile.close();

        }
        else if (user_choice == 4)
        {
            while_loop1 = false;
        }
        else
        {
            std::cout << "Please put 1,2,3 or 4" << std::endl;
        }
       

    }
    


}


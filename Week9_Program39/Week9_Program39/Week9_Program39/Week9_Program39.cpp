// Week9_Program39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using std::setw;

struct player_details
{
    std::string name;

    int score;
};

void Score_display(player_details players[11]);

int main()
{
    std::ofstream outFile;

    bool while_loop = true; 
    bool while_loop1 = true;

    char details_repetition;

    
    player_details user_details[11];

    int player_choice;

    while (while_loop)
    {
        std::cout << "Please select one of the following options\n1. Enter a score\n2. Display scores\n3. Exit" << std::endl;
        std::cin >> player_choice;

        if (player_choice == 1)
        {
            while_loop1 = true;

            outFile.open("scores.txt", std::ios::out | std::ios::app);

            while (while_loop1)
            {
                if (outFile.is_open())
                {
                    for (int i = 1; i < 11; i++)
                    {
                        std::cout << "Please put your details here:\n\nName: ";
                        std::cin >> user_details[i].name;

                        std::cout << "\nScore: ";
                        std::cin >> user_details[i].score;

                        outFile << "Name: " << user_details[i].name << std::endl;
                        outFile << "Score: " << user_details[i].score << std::endl;

                        std::cout << "Would you like to enter more details? Y/N" << std::endl;
                        std::cin >> details_repetition;

                        if (details_repetition == 'N')
                        {

                            while_loop1 = false;
                            break;
                            break;
                        }


                    }
                }
            }

            outFile.close();
        }

        else if (player_choice == 2)
        {
            while_loop1 = true;
            outFile.open("scores.txt", std::ios::out | std::ios::app);

            if (outFile.is_open())
            {
                while (while_loop1)
                {
                    for (int i = 1; i < 11; i++)
                    {
                       
                        Score_display(user_details);
                        
                        std::cout << "Name: " << setw(7) << user_details[i].name << std::endl;
                        std::cout << "Score: " << setw(7) <<  user_details[i].score << std::endl;
                       
                    }
                    while_loop1 = false;

                }
            }

            outFile.close();
        }

        else if (player_choice == 3)
        {
            while_loop = false;
        }

        else
        {
            std::cout << "Please put 1, 2 or 3" << std::endl;
        }
    }
}

void Score_display(player_details players[11])
{
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; i < 11; i++)
        {
            
            if (players[j].score < players[j + 1].score)
            {
                int Temp = players[j].score;
                players[j].score = players[j + 1].score;
                players[j + 1].score = Temp;

                std::string Temp1 = players[j].name;
                players[j].name = players[j + 1].name;
                players[j + 1].name = Temp1;
            }
            else if (players[j + 1].score < players[j + 2].score)
            {
                int Temp = players[j + 1].score;
                players[j + 1].score = players[j + 2].score;
                players[j + 2].score = Temp;

                std::string Temp1 = players[j + 1].name;
                players[j + 1].name = players[j + 2].name;
                players[j + 2].name = Temp1;
            }
            else if (players[j + 2].score < players[j + 3].score)
            {
                int Temp = players[j + 2].score;
                players[j + 2].score = players[j + 3].score;
                players[j + 3].score = Temp;

                std::string Temp1 = players[j + 2].name;
                players[j + 2].name = players[j + 3].name;
                players[j + 3].name = Temp1;
            }
            else if (players[j + 3].score < players[j + 4].score)
            {
                int Temp = players[j + 3].score;
                players[j + 3].score = players[j + 4].score;
                players[j + 4].score = Temp;

                std::string Temp1 = players[j + 3].name;
                players[j + 3].name = players[j + 4].name;
                players[j + 4].name = Temp1;
            }
            else if (players[j + 4].score < players[j + 5].score)
            {
                int Temp = players[j + 4].score;
                players[j + 4].score = players[j + 5].score;
                players[j + 5].score = Temp;

                std::string Temp1 = players[j + 4].name;
                players[j + 4].name = players[j + 5].name;
                players[j + 5].name = Temp1;
            }
            else if (players[j + 5].score < players[j + 6].score)
            {
                int Temp = players[j + 5].score;
                players[j + 5].score = players[j + 6].score;
                players[j + 6].score = Temp;

                std::string Temp1 = players[j + 5].name;
                players[j + 5].name = players[j + 6].name;
                players[j + 6].name = Temp1;
            }
            else if (players[j + 6].score < players[j + 7].score)
            {
                int Temp = players[j + 6].score;
                players[j + 6].score = players[j + 7].score;
                players[j + 7].score = Temp;

                std::string Temp1 = players[j + 6].name;
                players[j + 6].name = players[j + 7].name;
                players[j + 7].name = Temp1;
            }
            else if (players[j + 7].score < players[j + 8].score)
            {
                int Temp = players[j + 7].score;
                players[j + 7].score = players[j + 8].score;
                players[j + 8].score = Temp;

                std::string Temp1 = players[j + 7].name;
                players[j + 7].name = players[j + 8].name;
                players[j + 8].name = Temp1;
            }
            else if (players[j + 8].score < players[j + 9].score)
            {
                int Temp = players[j + 8].score;
                players[j + 8].score = players[j + 9].score;
                players[j + 9].score = Temp;

                std::string Temp1 = players[j + 8].name;
                players[j + 8].name = players[j + 9].name;
                players[j + 9].name = Temp1;
            }
        }
    }
}

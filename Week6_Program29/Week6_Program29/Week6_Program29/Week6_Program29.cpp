#include <iostream>
#include <string>
#include <random>
using namespace std;

int main()
{
    const string computer_choices[3] = { "Rock", "Paper", "Scissors" };
    string user_choice;
    int user_score = 2;
    int computer_score = 2;

    while (user_score > 0 || computer_score > 0)
    {
        cout << "You are going to play Rock, Paper, Scissors against the computer.\nPlease write your choice:";
        getline(cin, user_choice);

        cout << "\nYour choice: " << user_choice << endl;

        string computer_election = computer_choices[rand() % 3];

        cout << "\nThe computer choice: " << computer_election << endl;

        if (user_choice == computer_election)
        {
            cout << "That is a draw" << endl;
            cout << "\nThe user needs: " << user_score << " wins more" << endl;
            cout << "\nThe computer needs: " << computer_score << " wins more" << endl;
        }
        else if (user_choice == "Rock" && computer_election == computer_choices[1])
        {
            cout << "The computer wins" << endl;
            computer_score--;
            cout << "\nThe user needs: " << user_score << " wins more" << endl;
            cout << "\nThe computer needs: " << computer_score << " wins more" << endl;
        }
        else if (user_choice == "Rock" && computer_election == computer_choices[2])
        {
            cout << "You win" << endl; 
            user_score--;
            cout << "\nThe user needs: " << user_score << " wins more" << endl;
            cout << "\nThe computer needs: " << computer_score << " wins more" << endl;

        }
        else if (user_choice == "Paper" && computer_election == computer_choices[0])
        {
            cout << "You win" << endl;
            user_score--;
            cout << "\nThe user needs: " << user_score << " wins more" << endl;
            cout << "\nThe computer needs: " << computer_score << " wins more" << endl;
        }
        else if (user_choice == "Paper" && computer_election == computer_choices[2])
        {
            cout << "The computer wins" << endl;
            computer_score--;
            cout << "\nThe user needs: " << user_score << " wins more" << endl;
            cout << "\nThe computer needs: " << computer_score << " wins more" << endl;
        }
        else if (user_choice == "Scissors" && computer_election == computer_choices[0])
        {
            cout << "The computer wins" << endl;
            computer_score--;
            cout << "\nThe user needs: " << user_score << " wins more" << endl;
            cout << "\nThe computer needs: " << computer_score << " wins more" << endl;
        }
        else if (user_choice == "Scissors" && computer_election == computer_choices[1])
        {
            cout << "You win" << endl;
            user_score--;
            cout << "\nThe user needs: " << user_score << " wins more" << endl;
            cout << "\nThe computer needs: " << computer_score << " wins more" << endl;
        }

        if (user_score == 0)
        {
            cout << "\nCongratulations, you win the game!!" << endl;
            break;
        }
        else if (computer_score == 0)
        {
            cout << "\nOhh...The computer wins the game..." << endl;
            break;
        }

    }
    
    

    

    


}
    

#include <iostream>
#include <ctime>
#include <algorithm>
#include <string>

void new_username(std::string usern);

int main()
{
    std::string username;
    

    std::cout << "Please enter a username" << std::endl;
    getline(std::cin, username);

    std::cout << "Sorry, that username has been already taken" << std::endl;

    new_username(username);

    
}

void new_username(std::string usern)
{
    srand(time(NULL));
    int num = rand();
    int& rNum = num;

    usern = usern + std::to_string(rNum);

    std::cout << "\nYour new username now is: " << usern << std::endl;

   
   
}

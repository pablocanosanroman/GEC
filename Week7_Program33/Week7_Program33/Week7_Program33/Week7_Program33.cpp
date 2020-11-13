// Week7_Program33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


struct User
{
   
   std::string name;
   int age = 0;
   std::string telephone_number;
   
   void PrintDetails(std::string user_name, int user_age, std::string user_tel)
   {
       name = user_name;
       age = user_age;
       telephone_number = user_tel;

       std::cout << "\nYour details are:\n" << "Name: " << name << "\n" << "Age: " << age << "\n" << "Telephone number: " << telephone_number << std::endl;
   }
    
}PersonalDetails;


int main()
{
    std::cout << "Please enter your name: " << std::endl;
    getline(std::cin, PersonalDetails.name);

    std::cout << "\nPlease enter your telephone number: " << std::endl;
    getline(std::cin, PersonalDetails.telephone_number);

    std::cout << "\nPlease now enter your age: " << std::endl;
    std::cin >> PersonalDetails.age;

    

    
    PersonalDetails.PrintDetails(PersonalDetails.name, PersonalDetails.age, PersonalDetails.telephone_number);
}


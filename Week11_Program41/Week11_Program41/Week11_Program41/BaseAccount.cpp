#include "BaseAccount.h"
#include <iostream>
#include <string>

BaseAccount::BaseAccount()
{
	_user = new UserDetails1;
	_user->bankAccount = rand() % 1000000000 + 10000000;
	_user->interest = 5;
	cancelProcess = true;
	while (cancelProcess)
	{
		std::cout << "Please enter the following details" << std::endl;
		
		std::cout << "\n";
		getline(std::cin, _user->Surname);
		std::cout << "\nSurname: ";
		getline(std::cin, _user->Surname);
		std::cout << "\nForename: ";
		getline(std::cin, _user->Forename);
		std::cout << "\nAddress: ";
		getline(std::cin, _user->Address);
		std::cout << "\nHow much money do you wish to place? It has to be greater than 0" << std::endl;
		std::cin >> _user->initialmoney;

		if (_user->initialmoney <= 0)
		{
			std::cout << "The amount of money has to be greater than 0" << std::endl;

		}
		else
		{
			std::cout << "Your account number is: " << _user->bankAccount << std::endl;
			std::cout << "The interest of this account is: " << _user->interest << "%" << std::endl;
			cancelProcess == false;
			break;
		}

	}
	

}

BaseAccount::~BaseAccount()
{
	delete _user;
}


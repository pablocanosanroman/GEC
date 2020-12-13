#include "SavingsAccount.h"
#include <iostream>
#include <string>

SavingAccount::SavingAccount()
{
	_savingUser = new UserDetails3;
	_savingUser->bankAccount = rand() % 1000000000 + 10000000;
	_savingUser->interest = 7;
	cancelProcess = true;
	while (cancelProcess)
	{
		std::cout << "Please enter the following details" << std::endl;

		std::cout << "\n";
		getline(std::cin, _savingUser->Surname);
		std::cout << "\nSurname: ";
		getline(std::cin, _savingUser->Surname);
		std::cout << "\nForename: ";
		getline(std::cin, _savingUser->Forename);
		std::cout << "\nAddress: ";
		getline(std::cin, _savingUser->Address);
		std::cout << "\nHow much money do you wish to place? It has to be greater than 0" << std::endl;
		std::cin >> _savingUser->initialmoney;

		if (_savingUser->initialmoney <= 0)
		{
			std::cout << "The amount of money has to be greater than 0" << std::endl;

		}
		else
		{
			std::cout << "Your account number is: " << _savingUser->bankAccount << std::endl;
			std::cout << "The interest of this account is: " << _savingUser->interest << "%" << std::endl;
			cancelProcess == false;
			break;
		}

	}


}

SavingAccount::~SavingAccount()
{
	delete _savingUser;
}
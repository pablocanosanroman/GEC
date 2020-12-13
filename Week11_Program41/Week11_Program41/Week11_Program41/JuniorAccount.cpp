#include "JuniorAccount.h"
#include <iostream>
#include <string>

JuniorAccount::JuniorAccount()
{
	_juniorUser = new UserDetails2;
	_juniorUser->bankAccount = rand() % 1000000000 + 10000000;
	_juniorUser->interest = 1;
	cancelProcess = true;
	while (cancelProcess)
	{
		std::cout << "Please enter the following details" << std::endl;

		std::cout << "\n";
		getline(std::cin, _juniorUser->Surname);
		std::cout << "\nSurname: ";
		getline(std::cin, _juniorUser->Surname);
		std::cout << "\nForename: ";
		getline(std::cin, _juniorUser->Forename);
		std::cout << "\nAddress: ";
		getline(std::cin, _juniorUser->Address);
		std::cout << "\nHow much money do you wish to place? It has to be greater than 0" << std::endl;
		std::cin >> _juniorUser->initialmoney;

		if (_juniorUser->initialmoney <= 0)
		{
			std::cout << "The amount of money has to be greater than 0" << std::endl;

		}
		else
		{
			std::cout << "Your account number is: " << _juniorUser->bankAccount << std::endl;
			std::cout << "The interest of this account is: " << _juniorUser->interest << "%" << std::endl;
			cancelProcess == false;
			break;
		}

	}


}

JuniorAccount::~JuniorAccount()
{
	delete _juniorUser;
}
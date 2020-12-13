#pragma once
#ifndef SAVING_H
#define SAVING_H
#include <string>
#include <iostream>

struct UserDetails3
{
	std::string Surname;
	std::string Forename;
	std::string Address;
	int initialmoney;
	int bankAccount;
	int interest;
};

class SavingAccount
{
public:

	SavingAccount();
	~SavingAccount();

private:

	UserDetails3* _savingUser;
	bool cancelProcess;

};

#endif //SAVING_H

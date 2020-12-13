#pragma once
#ifndef JUNIOR_H
#define JUNIOR_H
#include <string>
#include <iostream>

struct UserDetails2
{
	std::string Surname;
	std::string Forename;
	std::string Address;
	int initialmoney;
	int bankAccount;
	int interest;
};

class JuniorAccount
{
public:

	JuniorAccount();
	~JuniorAccount();

private:

	UserDetails2* _juniorUser;
	bool cancelProcess;

};

#endif //JUNIOR_H
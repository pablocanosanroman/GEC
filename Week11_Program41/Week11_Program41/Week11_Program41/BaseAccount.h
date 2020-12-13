#pragma once
#ifndef BASE_H
#define BASE_H
#include <string>
#include <iostream>

struct UserDetails1
{
	std::string Surname;
	std::string Forename;
	std::string Address;
	int initialmoney;
	int bankAccount;
	int interest;
};

class BaseAccount
{
public:

	BaseAccount();
	~BaseAccount();

	


private:
	
	UserDetails1* _user;
	bool cancelProcess;
	
	
	
};

#endif //BASE_H


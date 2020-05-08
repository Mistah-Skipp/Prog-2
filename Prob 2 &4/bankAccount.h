//bankAccount.h
#pragma once
#include <string>
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class bankAccount {
public:
				//Name
	void setActName(std::string firstname, std::string lastname);
	//Func: to set account name
	//PostCond: actName = name;

	std::string getActName() const;
	//Func:to return account name
	//PostCond: the string of account name is returned

				//Number
	void setActNum(int num);
	//Func: to set the account number
	//PostCond: actNum = num;

	double getActNum()const;
	//Func:to return account number
	//PostCond:the acct number is returned

				//Balance	
	void setBalance(double bal);
	//Func:to set account balance
	//PostCond:balance = bal;

	double getBalance()const;
	//Func:to return balance of the account
	//PostCond: the balance is returned

				//Account Type
	void setActType(std::string type = " ");
	//Func:sets account type
	//PostCond: actType = type;

	std::string getActType() const;	
	//Func:returns the account type
	//PostCond:the string fro actType is returned

				//interest Rate
	void setIntRate(double iRate = 0);
	//sets the account interest rate
	double getIntRate() const;
	//returns the accounts interest rate

				//print
	void actPrint();
	//prints out the account name, type, number, balance, and interest rate

	//constructor
	bankAccount(std::string firstName = "",std::string lastName ="", std::string type = "", double num = 0.0, double bal = 0.0, double iRate = 0.0);
	//Func:sets the values set by the user
	//PostCond:string actName = name; string actType = type; double actNum = num; double balance = bal;


private:
	std::string actFName, actLName;
	std::string actType, actName;
	double actNum, balance, intRate;

};

#endif /* BANK_ACCOUNT_H */

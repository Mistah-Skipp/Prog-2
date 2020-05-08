#pragma once
#ifndef CHECKING_ACT_H
#define CHECKING_ACT_H

#include "bankAccount.h"

class checking : public bankAccount {
public:
	void setServiceCharge(double charge);
	//sets the service charge 
	//srvCHrg = charge
	double getServiceCharge()const;
	//returns checkings acct service charge
	void setMinBalance(double minBal);
	//set minimum balance
	//minimum = minBal
	double getMinBalance()const;
	//returns minimum balance
	void withdraw(double balChange);
	//withdraws/subtracts x money from bank account
	//change = balChange
	void deposit(double balChange);
	//deposits/adds x money to bank account
	//change = balChange
	void postInterest();
	//adds interest to the bank account
	//(interest rate * balance) + balance
	checking(double charge = 20, double rate = .04, double minBal = 500, double intBal = 1000, double balChange = 0);

private:
	double srvChrg;		//service charge
	double intRate;		//initial rate
	double minimum;		//minimum balance
	double intialBal;	//initial balance
	double change;	//balance change
};

#endif /* CHECKING_ACT_H */

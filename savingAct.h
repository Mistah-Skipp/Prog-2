#pragma once
#ifndef SAVING_ACT_H
#define SAVING_ACT_H
#include "checkingAct.h"

class saving : public bankAccount {
public:
	void setMinBal(double minBal);
	//sets acct minimum balance
	//minimum = minBal
	double getMinBal()const;
	//returns minimum balance for savings
	void setServiceCharge(double charge);
	//sets service charge for saving acct
	//serCharge = charge
	double getServiceCharge()const;
	//returns savings acct service charge
	void withdraw(double change);
	//withdraws/subtracts money from savings acct
	//also checks to see if acct has enough money or charges
	void deposit(double change);
	//deposits/adds x amount to saving acct
	void postInterest();
	//adds interest to savings account

	saving(double charge = 20, double rate = .06, double minBal = 0, double intBal = 1500, double change = 0);
private:
	double servCharge;		//service charge
	double intRate;			//initial rate
	double minimum;			//minimum balance
	double initial;			//initial balance
	double balChange;		//balance change

};

#endif /* SAVING_ACT_H */

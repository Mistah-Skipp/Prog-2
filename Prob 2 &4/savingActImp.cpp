#include <iostream>
#include "savingAct.h"
#include "bankAccount.h"

//Minimum Balance
void saving::setMinBal(double minBal) {
	minimum = minBal;
}

double saving::getMinBal() const {
	return minimum;
}

//Service Charge
void saving::setServiceCharge(double charge) {
	servCharge = charge;
}

double saving::getServiceCharge() const {
	return servCharge;
}

//Withdraw
void saving::withdraw(double change) {
	bankAccount::setBalance(bankAccount::getBalance() - balChange);
	if (bankAccount::getBalance() < saving::getMinBal()) {
		//checks if enough $$ in account, if not its charged with service fee
		std::cout << "Acct Overdrawn...Charging balance\n";
		bankAccount::setBalance(bankAccount::getBalance() - saving::getServiceCharge());
	}
}
//Deposit
void saving::deposit(double change) {
	return saving::setBalance(saving::getBalance() + change);
}
//Post Interest
void saving::postInterest() {
	bankAccount::setBalance((bankAccount::getIntRate() * bankAccount::getBalance()) + bankAccount::getBalance());
}

//constructor
saving::saving(double charge, double rate, double minBal, double intBal, double change) {
	servCharge = charge;
	bankAccount::setIntRate(rate);
	minimum = minBal;
	bankAccount::setBalance(intBal);
	balChange = change;
}

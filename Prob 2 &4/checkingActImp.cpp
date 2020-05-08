//checkingActImp

#include <iostream>
#include "checkingAct.h"
#include "bankAccount.h"

//Service Charge
void checking::setServiceCharge(double charge) {
	srvChrg = charge;
}
double checking::getServiceCharge() const {
	return srvChrg;
}
//Minimum Balance
void checking::setMinBalance(double minBal) {
	minimum = minBal;
}
double checking::getMinBalance() const {
	return minimum;
	
}
//Deposit Withdraw
void checking::withdraw(double balChange) {	//withdraw also used for writing check
	bankAccount::setBalance(bankAccount::getBalance() - balChange);
		if (bankAccount::getBalance() < checking::getMinBalance()) {
			//checks if enough $$ in account, if not its charged with service fee
			std::cout << "Acct Overdrawn...Charging balance\n";
			bankAccount::setBalance(bankAccount::getBalance() - checking::getServiceCharge());
		}
}
void checking::deposit(double balChange){
	bankAccount::setBalance(bankAccount::getBalance() + balChange);
}
void checking::postInterest() {
	bankAccount::setBalance((bankAccount::getIntRate() * bankAccount::getBalance()) + bankAccount::getBalance());
}
checking::checking(double charge, double rate, double minBal, double intBal, double balChange) {
	srvChrg = charge;
	bankAccount::setIntRate(rate);
	minimum = minBal;
	bankAccount::setBalance(intBal);
	change = balChange;
}

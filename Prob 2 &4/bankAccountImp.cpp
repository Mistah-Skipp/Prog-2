//bankAccountImp.cpp

#include <string>
#include <iostream>
#include <iomanip>
#include "bankAccount.h"
using namespace std;
//Name
void bankAccount::setActName(std::string firstName, std::string lastName) {
	actFName = firstName;
	actLName = lastName;
	actName = firstName + " " + lastName;
}

std::string bankAccount::getActName() const {
	return actName;
}
//Number
void bankAccount::setActNum(int num) {
	actNum = num;
}

double bankAccount::getActNum() const {
	return actNum;
}
//Balance
void bankAccount::setBalance(double bal) {
	balance = bal;	
}

double bankAccount::getBalance() const {
	return balance;
}
//Account Type
void bankAccount::setActType(std::string type) {
	actType = type;
}

std::string bankAccount::getActType() const {
	return actType;
}

//interest rate
double bankAccount::getIntRate() const{
	return intRate;
}
void bankAccount::setIntRate(double iRate) {
	intRate = iRate;
}

//Print
void bankAccount::actPrint() {
	cout << "Account Name: "<< getActName() << endl 
		<<"Account Type: "<< getActType() << endl 
		<<"Account Number: "<< getActNum() << endl
		<<"Interest Rate: "<< setprecision(3) << getIntRate();
}
//Constructor
bankAccount::bankAccount(std::string firstName,std::string lastName, std::string type, double num, double bal, double iRate) {
	actFName = firstName;
	actLName = lastName;
	actType = type;
	actNum = num;
	balance = bal;
	intRate = iRate;

}

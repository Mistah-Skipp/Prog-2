#include <iostream>
#include <string>
#include "bankAccount.h"
using namespace std;

int main() {
	int choice = 0, leave = 0,num;
	bankAccount account;
	string fName, lName, type;
	double bal, rate, balChange;
	while (leave == 0) {
		cout << "\nEnter 1 to add a new account: \n" << "Enter 2 for an existing acount: \n"
			<< "Enter 3 to print account data: \n" << "Enter 9 to exit program:  \n";
		cin >> choice;
		if (choice == 1) {	//takes in all the needed variables for a new account
			cout << "Enter account name: ";
			cin >> fName >> lName;
			account.setActName(fName, lName);								//name
			cout << "Enter account type: ";
			cin >> type;
			account.setActType(type);								//account type
			cout << "Enter account number you want to use: ";
			cin >> num;
			account.setActNum(num);									//account number
			cout << "Amount to be Deposited: ";
			cin >> bal;
			account.setBalance(bal);								//balance
			cout << "Enter interest rate as %: ";
			cin >> rate;
			account.setIntRate(rate);								//interest rate
		} 
		else if (choice == 2) {	//gives a different screen for existing members
			cout << "Enter Account Number: ";
			cin >> num;
			if (account.getActNum() == num) {
				if (account.getActNum() == num)
					cout << "Enter 1 to make a deposit: \n" << "Enter 2 to make a withdraw: \n"
					<< "Enter 3 to check balance: \n" << "Enter 9 to exit program:  \n";
				cin >> choice;
				if (choice == 1) {
					cout << "How much do you want to deposit: ";
					cin >> balChange;
					account.setBalance(account.getBalance()+balChange);
				}
				else if (choice == 2) {
					cout << "how much do you want to withdraw: ";
					cin >> balChange;
					account.setBalance(account.getBalance() - balChange);
				}
				else if (choice == 3) {
					cout <<"Balance: " << account.getBalance();
				}
				else if (choice == 9) {
				}
				else {
					cout << "Invalid Input";
				}
			} else {
				cout << "Invalid Account Number";
			}
		} 
		else if (choice == 3) {	//prints out account info
			account.actPrint();
		} 
		else if (choice == 9) {	//exits the program
			leave = 1;
		} 
		else {
			cout << "invalid choice, try again: \n";
		}
	}

	cout << endl;
	return 0;
}

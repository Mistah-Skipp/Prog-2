#include <iostream>
#include <string>
#include "bankAccount.h"
#include "checkingAct.h"
#include "savingAct.h"
using namespace std;

int main() {
	checking acct1;
	saving acct2;
	double bal,rate,balChange;//rate controls service charge and interest rate,
							  //bal controls minimum balance
							  //balChange helps modifiy balance for withdraws, deposits, check writes
	int leave = 0,checkOpt = 0, saveOpt = 0,choice;
	//leave controls if the program should quit or not,choice selects savings,checkigns or quit
	//checkOpt is checking options selector
	//saveOpt is savings options selector


	while (leave == 0) {
		cout << "Enter 1 for checkings account. "
			<< "\nEnter 2 for savings account. " << "\nEnter 9 to exit program.\n";

		cin >> choice;
		if (choice == 1) {
			cout << "Checking ACCT#:	287	Balance: " << acct1.getBalance();
		}
		else if (choice == 2) {
			cout << "Saving ACCT#:	288	Balance: " << acct2.getBalance();
		}
		while (choice == 1) {	//checking acct code
			cout << "\nEnter 1 to make a deposit: \nEnter 2 to set interest rate: \n"
				<< "Enter 3 to set minimum balance: \nEnter 4 to set service charge: \n"
				<< "Enter 5 to withdraw: \nEnter 6 to write a check: \nEnter 7 to post interest: \n"
				<< "Enter 8 to check balance: \nEnter 9 to exit: ";
			cin >> checkOpt;
			if (checkOpt == 1) {	//Deposit
				cout << "Enter amount to deposit: $";
				cin >> balChange;
				acct1.deposit(balChange);
			}
			else if (checkOpt == 2) {	//set Interest Rate
				cout << "Set checking acct interest rate(as decimal): ";
				cin >> rate;
				acct1.setIntRate(rate);
			}
			else if (checkOpt == 3) {	//set Minimum Balance
				cout << "Set minimum balance for checkings: $";
				cin >> bal;
				acct1.setMinBalance(bal);
			}
			else if (checkOpt == 4) {	//set Service Charge
				cout << "Set service charge for checkings: $";
				cin >> rate;
				acct1.setServiceCharge(rate);
			}
			else if (checkOpt == 5) {	//withdraw
				cout << "Enter amount to withdraw: $";
				cin >> balChange;
				acct1.withdraw(balChange);
			}
			else if (checkOpt == 6) {	//write check = withdraw
				cout << "How much is the check worth: $";
				cin >> balChange;
				acct1.withdraw(balChange);
			}
			else if (checkOpt == 7) {	//post interest	 (rate * bal) + bal
				acct1.postInterest();
				
			}
			else if (checkOpt == 8) {	//print
				cout << "Checking ACCT#:	287	Balance: " << acct1.getBalance();
			}
			else if (checkOpt == 9) {	//leave this menu
				choice = 0;
			}
		}
		while (choice == 2) {		//saving acct code
			cout << "\nEnter 1 to make a deposit: \nEnter 2 to set interest rate: " 
				<< "\nEnter 3 to withdraw: \nEnter 4 to post interest: " 
				<<"\nEnter 5 to check balance: \nEnter 9 to quit: \n";
			cin >> saveOpt;
			if (saveOpt == 1) {	//deposit
				cout << "Enter amount to deposit: $";
				cin >> balChange;
				acct2.deposit(balChange);
			}
			else if (saveOpt == 2) {	//interest rate
				cout << "Set interest rate(in decimal): ";
				cin >> rate;
				acct2.setIntRate(rate);
			}
			else if (saveOpt == 3) {	//withdraw
				cout << "Enter amount to withdraw: $";
				cin >> balChange;
				acct2.withdraw(balChange);
			}
			else if (saveOpt == 4) {	//post int
				acct2.postInterest();
			}
			else if (saveOpt == 5) {	//print balance
				cout << "Saving ACCT#:	288	Balance: " << acct2.getBalance();
			}
			else if (saveOpt == 9){	//leave menu
				choice = 0;
			}
		}
		while (choice == 9) {	//quit
			exit(10);
		}
	}
	cout << endl;
	system("pause");
	return 0;
}

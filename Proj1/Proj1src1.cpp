//Test Program personType

#include <iostream>  
#include <string>
#include "personType.h" 

using namespace std;

int main()
{
	personType student("Lisa", "Regan");

	student.print();

	cout << endl;

	personType student2;
	student2.print();
	cout << endl;

	personType student3("John");
	student3.print();
	cout << endl;

	personType student4("John", "Richard", "Oliver");
	student4.print();
	cout << endl;
	cout << student4.getMidName();
	cout << endl << student4.checkfirstName(student3.getFirstName()) << endl;

	cout << student.checkLastName(student4.getLastName());
	cin.ignore(2);
	return 0;
}

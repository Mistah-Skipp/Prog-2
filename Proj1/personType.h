//personType.h
   
#include <string> 

using namespace std;

class personType
{
public:
	void print() const;
	//Function to output the first name middle name last name
	//in the form firstName middleName lastName.

	void setName(string first,string middle, string last);
	//Function to set firstName middlename, lastName according 
	//to the parameters.
	//Postcondition: firstName = first; middleName = middle; lastName = last

	void setFirstName(string first);
	//Func to set the first name only
	//post cond:firstName = first;

	void setLastName(string last);
	//func to set last name only
	//post cond lastName = last;
	void setMidName(string middle);
	//func to set the middle name
	//post cond: middleName = middle;

	string getFirstName() const;
	//Function to return the first name.
	//Postcondition: The value of firstName is returned.

	string getMidName() const;
	//Function to return the middle name.
	//Postcondition: The value of middleName is returned.
	string getLastName() const;
	//Function to return the last name.
	//Postcondition: The value of lastName is returned.
	string checkfirstName(string first) const;
	//function to compare firstnames to see if they are the same
	//post cond: true if the same, false if not
	string checkLastName(string last) const;
	//function to compare lastnames to see if they are the same
	//post cond: true if the same, false if not
	personType(string first = "", string last = "");
	//Constructor
	//Sets firstName and lastName according to the parameters.
	//The default values of the parameters are null strings.
	//Postcondition: firstName = first; lastName = last  
	personType(string first, string middle, string last);
	//Constructor
	//Sets firstName, middleName and lastName according to the parameters.
	//The default values of the parameters are null strings.
	//Postcondition: firstName = first; middleName = middle; lastName = last  

private:
	string firstName; //variable to store the first name
	string lastName;  //variable to store the last name
	string middleName; //variable to store the middle name
};



//personTypeImp.cpp

#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
	cout << firstName << " " << middleName << " "  << lastName;
}

void personType::setName(string first,string middle, string last)
{
	firstName = first;
	middleName = middle;
	lastName = last;
}
void personType::setFirstName(string first) {
	firstName = first;
}
void personType::setMidName(string middle) {
	middleName = middle;
}

void personType::setLastName(string last) {
	lastName = last;
}

string personType::getFirstName() const
{
	return firstName;
}

string personType::getLastName() const
{
	return lastName;
}

string personType::getMidName() const
{
	return middleName;
}
string personType::checkfirstName(string first) const {
	if (firstName == first)
		return  "First names match.";
	else
		return "First name don't match.";
}
string personType::checkLastName(string last) const {
	if (lastName == last)
		return "Last names match.";
	else
		return "Last names don't match.";
}

//constructor
personType::personType(string first, string last)

{
	firstName = first;
	lastName = last;
}
personType::personType(string first,string middle, string last)

{
	firstName = first;
	lastName = last;
	middleName = middle;
}


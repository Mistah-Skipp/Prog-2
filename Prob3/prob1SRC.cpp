
//The user program that uses the class circleType

#include <iostream> 
#include <iomanip>
#include "circleType.h"
#include "cylinderType.h"


using namespace std;

int main()
{
	cylinderType cylinder;
	double rad;
	double hght;
	cout << fixed << showpoint << setprecision(2);

	cout << "set radius of the cylinder: ";	//ask user to input radius of cylinder
	cin >> rad;	
	cylinder.radiusBase(rad);
	cout << "Set height of the cylinder: ";	//ask user to input height of the cylinder
	cin >> hght;
	cylinder.setHeight(hght);
	cylinder.cyldPrint();
	cout << endl << endl;
	system("pause");
	return 0;
}

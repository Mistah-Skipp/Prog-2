
//The user program that uses the class circleType

#include <iostream> 
#include <iomanip>
#include "circleType.h"
#include "cylinderType.h"


using namespace std;

int main()
{
	cylinderType cylinder;
	double rad;//radius
	double hght;//height
	double shipCost, costSqrFT;//shipCost = shipping cost  costSqrFT = cost per square foot

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter radius of the base adn then the hieght (in feet) of the container: ";
	cin >> rad >> hght;

	cylinder.radiusBase(rad);
	cylinder.setHeight(hght);

	cout << "\nEnter shipping cost per liter: $";
	cin >> shipCost;
	cout << "\nEnter container paint cost per square foot: $";
	cin >> costSqrFT;

	shipCost = shipCost * cylinder.volume() * 28.32;//shipping cost = shipping cost * container volume * per liter
	costSqrFT *= cylinder.surfaceArea(); // painting cost = cost per sqrFoot * container surface area


	cout << "\ncontainer shipping cost: $" << shipCost		//outputs shipping cost and paint cost
		<< endl << "container paint cost: $" << costSqrFT;

	cout << endl << endl;
	system("pause");
	return 0;
}

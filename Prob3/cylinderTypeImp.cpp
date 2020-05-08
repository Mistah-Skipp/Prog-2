#include <iostream>
#include "cylinderType.h"
#include "circleType.h"
using namespace std;

void  cylinderType::cyldPrint() {
	cout << "Cylinder base radius: " << getRadius()
		<< "\nCylinder volume: " << volume()
		<< "\nCylinder surface area: " << surfaceArea();
}
double cylinderType::volume() {
	return 3.1416 * (getRadius() * getRadius()) * getHeight();
}

double cylinderType::surfaceArea() {
	return 2*3.1416 * getRadius() * getHeight() + (2*3.1416 * (getRadius() * getRadius()));
}

void cylinderType::setHeight(double h) {
	if (h >= 0)
		height = h;
	else
		height = 0;
}

double cylinderType::getHeight() {
	return height;
}

void cylinderType::radiusBase(double r) {
	setRadius(r);
}

cylinderType::cylinderType(double r, double h) {
	setRadius(r);
	setHeight(h);
}

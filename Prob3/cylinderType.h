#pragma once
#ifndef CYLINDER_TYPE_H
#define CYLINDER_TYPE_H

#include "circleType.h"

class cylinderType : public circleType{
	public:
		void cyldPrint();
		//prints out the cylinder baseradius,volume, surface area
		double volume();
		//Calculates the volume of the center and returns it

		double surfaceArea();
		//calculates and returns the surface area of the cylinder

		void setHeight(double h);
		//sets height of the cylinder
		// height = h
		double getHeight();
		//returns the cylinder height
		void radiusBase(double r);
		//gets and sets the radius base to the cylinder
		//constructors
		cylinderType(double r = 0, double h = 0);
	private:
		double radius;
		double height;
};

#endif /* CYLINDER_TYPE_H */

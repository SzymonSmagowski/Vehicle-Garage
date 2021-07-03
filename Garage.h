#pragma once

#include <iostream>
#include <string.h>
#include"Vehicle.h"
class Garage {
	static const int maxVehicles = 10;
	int currenentVehiclesNumber;
	Vehicle** vehicles;
public:
	Garage();
	~Garage();
	void AddVehicle(Vehicle* v);
	double GarageValue();
	int CountAllCars();
	friend ostream& operator<<(ostream& out, Garage& g);
};
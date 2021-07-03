#include"Garage.h"

Garage::Garage():currenentVehiclesNumber(0),vehicles(nullptr)
{
	vehicles = new Vehicle* [maxVehicles];
	for (int i = 0; i < maxVehicles; i++) {
		vehicles[i] = nullptr;
	}
}

Garage::~Garage()
{
	for (int i = 0; i < currenentVehiclesNumber; i++) {
		vehicles[i] = nullptr;
	}
	delete[] vehicles;
}

void Garage::AddVehicle(Vehicle* v)
{
	/*if (currenentVehiclesNumber < maxVehicles) {
		vehicles[currenentVehiclesNumber] = v;
		currenentVehiclesNumber++;
	}*/
	try {
		vehicles[currenentVehiclesNumber] = v;
		currenentVehiclesNumber++;
	}
	catch(exception e){
		cout << e.what() << endl;
	}
}

double Garage::GarageValue()
{
	double sum = 0;
	for (int i = 0; i < currenentVehiclesNumber; i++) {
		sum += vehicles[i]->GetValue();
	}
	return sum;
}

int Garage::CountAllCars()
{
	int sum = 0;
	Car* tmp = nullptr;
	for (int i = 0; i < currenentVehiclesNumber; i++) {
		if (tmp = dynamic_cast<Car*>(vehicles[i])) {
			sum++;
		}
	}
	return sum;
}



ostream& operator<<(ostream& out, Garage& g)
{
	out << "Vehicles in garage: " << g.currenentVehiclesNumber << endl;
	for (int i = 0; i < g.currenentVehiclesNumber; i++) {
		g.vehicles[i]->VehicleInfo();
		g.vehicles[i]->TellType();
	}
	out << "Value of whole garage is " << g.GarageValue() << " thousands." << endl;
	out << "Cars inside a garage: " << g.CountAllCars() << "." << endl;
	return out;
}

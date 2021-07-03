#include "Vehicle.h"

int Vehicle::vehicleCount = 0;
int Moto::motoCount = 0;
int Car::carCount = 0;
int Truck::truckCount = 0;

Vehicle::Vehicle(string name,int _seats, double value, Side s)
{
	vehicleName = name;
	seats = _seats;
	valueTh = value;
	side = s;
	ID = ++vehicleCount;
}

Vehicle::Vehicle(Vehicle& v)
{
	seats = v.seats;
	vehicleName = v.vehicleName;
	valueTh = v.valueTh;
	side = v.side;
	ID = ++vehicleCount;
}

void Vehicle::VehicleInfo()
{
	cout << "Vehicle ID: " << ID << ". Name: " << vehicleName << ". Value: " << valueTh << ". Seats: " << seats << "." << endl;
	if (side == Side::left) {
		cout << "Parked at left side." << endl;
	}
	else
	{
		cout << "Parked at right side." << endl;
	}
}

void Vehicle::ChangeSide()
{
	if (side == Side::left) {
		side = Side::right;
	}
	else {
		side = Side::left;
	}
}

bool Vehicle::operator==(const Vehicle& v)
{
	if (seats != v.seats) {
		return false;
	}
	if (vehicleName != v.vehicleName) {
		return false;
	}
	if (valueTh != v.valueTh) {
		return false;
	}
	if (seats != v.seats) {
		return false;
	}
	if (ID != v.ID) {
		return false;
	}
	return true;
	//I do not have to check it via dynamic_cast because every vehicle has its unique vehicle ID
}


Moto::Moto(string name, int _seats, double value, Side s) : Vehicle(name, _seats, value , s ), motoID(++motoCount)
{
	
}

Moto::Moto(Moto& m):Vehicle(m),motoID(++motoCount)
{

}

void Moto::TellType()
{
	cout << "It is a motocycle." << endl;
}

ostream& operator<<(ostream& out, Moto& m)
{
	m.VehicleInfo();
	m.TellType();
	out << "Current number of motos: " << m.motoCount << endl;
	return out;
}

Car::Car(string name, int _seats, double value , Side s ) : Vehicle(name, _seats, value, s), carID(++carCount) {

}

Car::Car(Car& c):Vehicle(c), carID(++carCount)
{

}

void Car::TellType()
{
	cout << "It is a car." << endl;
}

ostream& operator<<(ostream& out, Car& c)
{
	c.VehicleInfo();
	c.TellType();
	out << "Current number of cars: " << c.carCount << endl;
	return out;
}

Truck::Truck(string name, int _seats , double value , Side s) : Vehicle(name, _seats, value , s), truckID(++truckCount) {

}

Truck::Truck(Truck& t):Vehicle(t),truckID(++truckCount)
{

}

void Truck::TellType()
{
	cout << "It is a truck." << endl;
}

ostream& operator<<(ostream& out, Truck& t)
{
	t.VehicleInfo();
	t.TellType();
	out << "Current number of truck: " << t.truckCount << endl;
	return out;
}




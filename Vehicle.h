#pragma once

#include <iostream>
#include <string.h>
using namespace std;

enum class Side {
	left,
	right
};


class Vehicle {
private:
	int seats;
	string vehicleName;
	double valueTh;
	Side side;
	int ID;
	static int vehicleCount;
public:
	Vehicle(string name,int _seats = 2, double value = 15.5, Side s = Side::left);
	Vehicle(Vehicle& v);
	void VehicleInfo();
	void virtual TellType()=0;
	void ChangeSide();
	Side GetSide() { return side; }
	double GetValue() { return valueTh; }
	bool operator==(const Vehicle& v);
};



class Moto : public Vehicle {
private:
	static int motoCount;
	int motoID;
public:
	Moto(string name, int _seats = 2, double value = 15.5, Side s = Side::left);
	Moto(Moto& m);
	void virtual TellType();
	friend ostream& operator<<(ostream& out, Moto& m);
};



class Car : public Vehicle {
private:
	static int carCount;
	int carID;
public:
	Car(string name, int _seats = 4, double value = 25.5, Side s = Side::left);
	Car(Car& c);
	void virtual TellType();
    friend ostream& operator<<(ostream& out, Car& c);
};



class Truck : public Vehicle {
private:
	static int truckCount;
	int truckID;
public:
	Truck(string name, int _seats = 6, double value = 35.5, Side s = Side::left);
	Truck(Truck& t);
	void virtual TellType();
	friend ostream& operator<<(ostream& out, Truck& t);
};


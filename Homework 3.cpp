
#include <iostream>
#include<string.h>
#include"Vehicle.h"
#include"Garage.h"
using namespace std;

int main()
{
    //==============PART 1 ===============
    Moto m1("Anna");
    Car c1("Super car");
    Truck t1("Very Big Truck");
    Car c2("Even more super car",5,35.7,Side::right);
    c1.VehicleInfo();
    cout <<endl << t1 << endl;
    cout << c2 << endl;
    c2.ChangeSide();
    cout << c2 << endl;
    c2.ChangeSide();
    Car c3("Antek");
    Car c4("Elllo");
    //==============PART 2 ===============
    Garage g1;
    g1.AddVehicle(&m1);
    g1.AddVehicle(&c1);
    g1.AddVehicle(&c2);
    g1.AddVehicle(&c3);
    g1.AddVehicle(&c4);
    g1.AddVehicle(&t1);
    cout << g1;

    //===========PART 3 =================
    /*Moto m13("m13");
    Moto m2("m2");
    Moto m3("m3");
    Moto m4("m4");
    Moto m5("m5");
    Moto m6("m6");
    Moto m7("m7");
    Moto m8("m8");
    Moto m9("m9");
    Moto m10("m10");
    Moto m11("m11");
    Garage g2;
    g2.AddVehicle(&m13);
    g2.AddVehicle(&m2);
    g2.AddVehicle(&m3);
    g2.AddVehicle(&m4);
    g2.AddVehicle(&m5);
    g2.AddVehicle(&m6);
    g2.AddVehicle(&m7);
    g2.AddVehicle(&m8);
    g2.AddVehicle(&m9);
    g2.AddVehicle(&m10);
    g2.AddVehicle(&m11);
    cout << g1;*/
}



# Vehicle-Garage
Third part of basics concepts of cpp. Added inheritance and array of pointers.
There are 3 types of vehicles - motocycle, car and truck.
# Description:
# Part 1:
Vehicle abstract class members:

-integer seats-number of seats,

-string vehicleName-any name of a vehicle(let’s suppose vehicle have names),

-double valueTh – value in thousands,

-int ID – unical ID of every vehicle,

-static int vehicleCount,

-„Side” side type object that is enum class and tells if it is parked on left or right.

Constructor can take up to 4 arguments, only vehicleName is obligatory.

Seats, value, and Side have default values in the constructor. Implementing copy constructor.

Methods:

-VehicleInfo – prints content of variables,

-ChangeSide-changes side value function,

-TellType function that prints info if it is a motocycle, car or a truck.

Implementing operator ==.

# Part 2
Implementing 3 classes – Moto, Car and Truck – derivate from public Vehicle.

Every has 2 variables – static amount of this type and this object particular ID connected to static variable.

Implementing constructors taking up to 4 arguments (the same as basis class).

Done copy constructors.

Implementing operators <<.

# Part 3

Implementing a Garage class. Members:

- static int representing maxVehicles available,

-integer representing current number of vehicles,

-Vehicle** type to store vehicles inside garage.

Implementing non-argument constructor and destructor.

Implementing a method adding a vehicle to a garage.

Wrote method GarageValue that tells us value of all vehicles inside.

Wrote CountAllCars funstion that returns number of all cars inside. (Hint! Use dynamic_cast)

Implementing operator<<.
# Part 4

Wrote an exception catcher whether garage is full and you want to add another vehicle to it.

If you checked it previously you can comment that block of code.

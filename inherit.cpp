// Malika Xasanboyeva 220106
// 2.09.2025  | Tuesday 14:00
// Inheritance


// 1.
#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void startEngine() {
        cout << "Engine has started." << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void drive() {
        cout << "The car is moving." << endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine(); // inherited
    myCar.drive();       // own method
    return 0;
}





/*

2.
“Inheritance” represents an is-a relationship (Car is a Vehicle).
“Composition” represents a has-a relationship (Car has an Engine).


3. 
A derived class provides its own version of a method from the base class.
In C++, virtual in base and override in derived make overriding explicit.
In Java, @Override ensures the method truly overrides.

4.
Happens when a class inherits from two classes that share the same base, causing ambiguity.
C++ fixes it with virtual inheritance.
Java avoids it because classes can’t have multiple inheritance, only multiple interfaces.

*/

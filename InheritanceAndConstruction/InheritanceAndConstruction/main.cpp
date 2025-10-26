//
//  main.cpp
//  InheritanceAndConstruction
//
//  Created by Mark Calvelo on 10/26/25.
//

#include <iostream>
using namespace std;

class Machine {
private:
    int id;
public:
    Machine() {
        cout << "Machine no-argument constructor called" << endl;
    }
    // constructors in C++ are invoked but NOT inherited
    Machine(int id): id(id) {
        cout << "Machine no-argument constructor called" << endl;
        this->id = id;
    };
    void info() {
        cout << "ID: " << this->id << endl;
    }
};

class Vehicle: public Machine {
public:
    Vehicle() {
        cout << "Vehicle no-argument constructor called" << endl;
    }
    
    Vehicle(int id): Machine(id) {
        cout << "Vehicle no-argument constructor called" << endl;
    };
};

class Car: public Vehicle {
public:
    Car(): Vehicle(999) {
        cout << "Car no-argument constructor called" << endl;
    }
};

int main(int argc, const char * argv[]) {
    Vehicle vehicle1;
    vehicle1.info();
    
    Car car1;
    car1.info();
    
    return 0;
}

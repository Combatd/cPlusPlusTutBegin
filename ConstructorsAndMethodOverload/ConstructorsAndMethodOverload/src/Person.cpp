//
//  Person.cpp
//  ConstructorsAndMethodOverload
//
//  Created by Mark Calvelo on 10/6/25.
//

#include <stdio.h>
#include "Person.h"
#include <sstream>

Person::Person() {
    name = "defaultname";
    age = 0;
}

Person::Person(std::string newName, int newAge) {
    name = newName;
    age = newAge;
};

std::string Person::toString() {
    std::stringstream ss;
    
    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;
    
    return ss.str();
}

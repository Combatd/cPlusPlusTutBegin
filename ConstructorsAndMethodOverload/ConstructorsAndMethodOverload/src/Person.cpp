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
    age = 0;
    name = "";
}

/*
 this keyword sets the scope to...the current instance object with their attribute name, age
 the this keyword lets us not get confused with the same named parameters
 With pointers, we point to a the memory location of the new object, rather than the class parameter with an argument value of name or age.
 so...person1, person2 as opposed to the Person class's variables
 */

Person::Person(std::string name, int age) {
    this->name = name;
    this->age = age;
};

std::string Person::toString() {
    std::stringstream ss;
    
    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;
    
    return ss.str();
}

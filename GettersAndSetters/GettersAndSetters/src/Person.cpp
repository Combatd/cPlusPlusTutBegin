//
//  Person.cpp
//  GettersAndSetters
//
//  Created by Mark Calvelo on 10/6/25.
//

#include <stdio.h>
#include "Person.h"

Person::Person() {
    name: "George";
};

std::string Person::toString() {
    return "Person's name is: " + name;
};

std::string Person::getName() {
    return name;
};

void Person::setName(std::string newName) {
    name = newName;
}

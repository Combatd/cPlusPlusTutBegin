//
//  Cat.cpp
//  Classes
//
//  Created by Mark Calvelo on 10/4/25.
//

#include <stdio.h>
#include <iostream>
#include "Cat.h"

// constructor method
Cat::Cat() {
    std::cout << "Cat Created!" << std::endl;
    happy = true;
}

// destructor method - clears out instantiated object from memory
Cat::~Cat() {
    std::cout << "Cat destroyed!" << std::endl;
}

// :: means class method/function
void Cat::speak() {
    if (happy) {
        std::cout << "Meow!!!" << std::endl;
    } else {
        std::cout << "hiss..." << std::endl;
    }
}

void Cat::jump() {
    std::cout << "Jumping onto the bookcase" << std::endl;
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}

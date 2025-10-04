//
//  Cat.cpp
//  DataMembers
//
//  Created by Mark Calvelo on 10/4/25.
//

#include <iostream>
#include "Cat.hpp"

void Cat::speak(){
    if (happy) {
        std::cout << "Meow!" << std::endl;
    } else {
        std::cout << "Cat is not happy, so not mewoing." << std::endl;
    }
}

void Cat::jump() {
    std::cout << "The cat jumped." << std::endl;
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}


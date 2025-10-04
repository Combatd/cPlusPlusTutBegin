//
//  Cat.cpp
//  Classes
//
//  Created by Mark Calvelo on 10/4/25.
//

#include <stdio.h>
#include <iostream>
#include "Cat.h"

// :: means class method/function
void Cat::speak() {
    std::cout << "Meow!!!" << std::endl;
}

void Cat::jump() {
    std::cout << "Jumping onto the bookcase" << std::endl;
}

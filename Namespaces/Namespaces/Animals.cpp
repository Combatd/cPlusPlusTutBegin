//
//  Animals.cpp
//  Namespaces
//
//  Created by Mark Calvelo on 10/25/25.
//

#include "Animals.hpp"
#include <iostream>

namespace Animals {
    Cat::Cat() {
        
    }

    Cat::~Cat() {
        
    }

    void Cat::speak() {
        std::cout << "hissss" << std::endl;
    }
}

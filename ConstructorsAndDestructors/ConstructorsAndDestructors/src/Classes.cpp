//
//  Classes.cpp
//  Classes
//
//  Created by Mark Calvelo on 10/4/25.
//

#include <iostream>
#include <stdio.h>
#include "Cat.h"

int main() {
    std::cout << "Starting program..." << std::endl;
    
    // scope of bob which then will be destroyed
    {
        Cat bob;
        bob.speak();
    }
    
    std::cout << "Ending program..." << std::endl;
    return 0;
}

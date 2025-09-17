//
//  main.cpp
//  Switch
//
//  Created by Mark Calvelo on 9/17/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int value = 5;
    
    switch (value) {
        case 4:
            std::cout << "Value is 4" << std::endl;
            break;
        case 5:
            std::cout << "Value is 5" << std::endl;
            break;
        case 6:
            std::cout << "Value is 6" << std::endl;
            break;
        default:
            std::cout << "Unrecognized value." << std::endl;
            break;
    }
    
    char stillAnIntegerType = 6;
    
    switch (stillAnIntegerType) {
        case 4:
            std::cout << "character is 4" << std::endl;
            break;
        case 5:
            std::cout << "character is 5" << std::endl;
            break;
        case 6:
            std::cout << "character is 6" << std::endl;
            break;
        default:
            std::cout << "Unrecognized value." << std::endl;
            break;
    }
    
    return 0;
}

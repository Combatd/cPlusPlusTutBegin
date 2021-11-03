//
//  main.cpp
//  input
//
//  Created by Mark Calvelo on 11/3/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "Enter your name: " << std::flush;
    
    std::string input;
    std::cin >> input;
    
    std::cout << "You entered: " << input << std::endl;
    
    int value;
    std::cout << "Enter a number: " << std::flush;
    std::cin >> value; // if we put a non-integer value, we get 0
    
    std::cout << "You entered..." << value << std::endl;
    
    return 0;
}

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
    
    return 0;
}

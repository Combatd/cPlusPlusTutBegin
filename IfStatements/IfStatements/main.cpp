//
//  main.cpp
//  IfStatements
//
//  Created by Mark Calvelo on 11/7/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "Enter your password: " << std::flush;
    
    std::string input;
    std::cin >> input;
    
    std::cout << "'" << input << "'" << std::endl;
    
    return 0;
}

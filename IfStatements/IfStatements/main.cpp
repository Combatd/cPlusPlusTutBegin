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
    
    std::string password;
    
    std::cout << "Reenter your password! " << std::flush;
    
    std::cin >> password;
    
    
    if(input == password) {
        std::cout << "Password Accepted" << std::endl;
    } else {
        std::cout << "Access denied" << std::endl;
    }

    
    return 0;
}

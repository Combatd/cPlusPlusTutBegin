//
//  main.cpp
//  WhileLoops
//
//  Created by Mark Calvelo on 9/10/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
//    int i = 0;
//    
//    while (i <= 6) {
//        std::cout << "Value of i: " << i << std::endl;
//        
//        // i = i + 1;
//        i++;
//        std::cout << "we incremented i to " << i << " and onto next iteration" << std::endl;
//    }
//    
//    std::cout << "Program qutting..." << std::endl;
    
//    do while loops
    
    int value = 0;
    
    do {
        std::cout << "Hello! This will run at least once." << std::endl;
        value++;
    } while(value < 5);
    
    const std::string password = "hello";
    std::string input;
    
    do {
       
        std::cout << "Enter your password: " << std::flush;
        std::cin >> input;
        
        if(input != password) {
            std::cout << "Access denied." << std::endl;
        }
    } while (input != password);
    
    std::cout << "Password acceptes" << std::endl;
    
    
    return 0;
}

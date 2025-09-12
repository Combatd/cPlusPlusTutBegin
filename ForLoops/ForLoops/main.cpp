//
//  main.cpp
//  ForLoops
//
//  Created by Mark Calvelo on 9/10/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    for (int i = 0; i < 10; i++) {
        std::cout << "Hello " << i << std::endl;
    }
    
    /*
     * break
     */
    for (int i = 0; i < 5; i++) {
        std::cout << "i is: " << i << std::endl;
        
        if(i == 3) {
            break; // the rest of the for loop will stopp executing
        }
    }
    
    /*
     * continue
     */
    for (int i = 0; i < 5; i++) {
        std::cout << "i is: " << i << std::endl;
        
        if(i == 3) {
            continue; // on this specific iteration, nothing after this line will execute
        }
        
        std::cout << "Continuing..." << std::endl;
    }
    
    std::cout << "Program quitting..." << std::endl;
    
    const std::string password = "hello";
    std::string input;

    do {
        std::cout << "Enter your password: " << std::flush;
        std::cin >> input;
        
        if (input == password) {
            break; // terminae
        } else {
            std::cout << "Access denied..." << std::endl;
        }
        
    } while (true);
    
    
    return 0;
}

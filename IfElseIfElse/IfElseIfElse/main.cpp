//
//  main.cpp
//  IfElse
//
//  Created by Mark Calvelo on 11/20/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "1. Add new record \n";
    std::cout << "2. Delete record \n";
    std::cout << "3. View record \n";
    std::cout << "4. Search record \n";
    std::cout << "5. Quit \n";
    
    std::cout << "Enter your selection: " << std::flush;
    
    int value;
    std::cin >> value;
    
    if(value == 1) {
        std::cout << "Adding new record..." << std::endl;
    } else if (value == 2) {
        std::cout << "Deleting record..." << std::endl;
    } else if(value == 3) {
        std::cout << "Viewing..." << std::endl;
    } else if(value == 4) {
        std::cout << "Searching..." << std::endl;
    } else if(value == 5) {
        std::cout << "Quitting..." << std::endl;
    } else {
        std::cout << "Invalid option." << std::endl;
    }
    
    return 0;
}

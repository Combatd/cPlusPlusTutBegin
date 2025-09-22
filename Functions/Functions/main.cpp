//
//  main.cpp
//  Functions
//
//  Created by Mark Calvelo on 9/17/25.
//

#include <iostream>

void showMenu() {
    std::cout << "1. Search" << std::endl;
    std::cout << "2. View Record" << std::endl;
    std::cout << "3. Quit" << std::endl;
}

int getInput() {
    std::cout << "Enter selection: " << std::endl;
    
    int input;
    std::cin >> input;
    return input;
}

void processSelection(int selection) {
    switch (selection) {
        case 1:
            std::cout << "Saving.";
            break;
        case 2:
            std::cout << "Viewing..." << std::endl;
            break;
        case 3:
            std::cout << "Quitting..." << std::endl;
            break;
        default:
            std::cout << "Please select an item from the menu." << std::endl;
            showMenu();
            std::cout << std::endl;
            getInput();
    }
}


int main(int argc, const char * argv[]) {
    /*
     * A function in C++ is a reusable block of code that can be invoked
     * and split up your program into logical sections rather than writing
     * procedural code all over the place
     */
    
    showMenu();
    int input = getInput(); // this variable passes into the switch
    processSelection(input); // the input will be the selection argument

    return 0;
}

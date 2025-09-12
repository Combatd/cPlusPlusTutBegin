//
//  main.cpp
//  ArraysListsOfData
//
//  Created by Mark Calvelo on 9/11/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    /*
     An array is a list of elements in one variable.
     */
    std::cout << "Array of integers" << std::endl;
    int values[3];
    values[0] = 88;
    values[1] = 123;
    values[2] = 7;
    
    std::cout << values[0] << std::endl;
    std::cout << values[1] << std::endl;
    std::cout << values[2] << std::endl;
    
    std::cout << "Array of doubles" << std::endl;
    double numbers[4] = {4.5, 2.3, 7.2, 8.1};
    
    std::cout << numbers[0] << std::endl;
    std::cout << numbers[1] << std::endl;
    std::cout << numbers[2] << std::endl;
    
    for (int i = 0; i < 4; i++) {
        std::cout << "At index: " << i << " we have number: " << numbers[i] << std::endl;
    }
    
    // array of strings
    // you don't have to specify size if you assign values during variable declaration
    std::string texts[] = {"Apple", "Banana", "Orange"};
    
    for (int i = 0; i < 3; i++) {
        std::cout << "Element at index " << i << " " << texts[i] << std::endl;
    }
    
    return 0;
}

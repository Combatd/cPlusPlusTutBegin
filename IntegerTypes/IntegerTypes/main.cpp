//
//  main.cpp
//  IntegerTypes
//
//  Created by Mark Calvelo on 11/3/21.
//

#include <iostream>
#include <limits.h>

int main(int argc, const char * argv[]) {
    int value = 777;
    std::cout << value << std::endl;
    
    /*
     How do we know a number is too big for an int?
     */
    
    std::cout << "Max int value " << INT_MAX << std::endl;
    std::cout << "Min int value " << INT_MIN << std::endl;
    
    // We can change an int into long for larger values
    long int longValue = 23456789999;
    std::cout << longValue << std::endl;
    
    short int shortValue = 32767; // save memory with short
    std::cout << shortValue << std::endl;
    
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of short: " << sizeof(short) << std::endl;
    std::cout << "Size of long: " << sizeof(long) << std::endl;
    
    unsigned int uValue = 2342343; // can only be positive
    std::cout << uValue << std::endl;
    
    return 0;
}

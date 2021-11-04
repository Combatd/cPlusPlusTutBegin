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
    
    return 0;
}

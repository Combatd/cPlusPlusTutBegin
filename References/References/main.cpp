//
//  main.cpp
//  References
//
//  Created by Mark Calvelo on 10/19/25.
//

#include <iostream>

// parameter is actually a reference to an existing variable - the argument passed in
void changeValue(double &value) {
    value = 123.4;
}

int main(int argc, const char * argv[]) {
    
    /*
     value2 is just another name for value 1
     The & creates a reference to access value1, a new int is NOT created
     They are like aliases to existing variables in memory
     */
    
    int value1 = 8;
    int &value2 = value1;
    value2 = 10;
    
    std::cout << "Value 1: " << value1 << std::endl;
    std::cout << "Value 2: " << value2 << std::endl;
    
    double value = 4.321;
    changeValue(value);
    std::cout << value << std::endl;
    
    return 0;
}

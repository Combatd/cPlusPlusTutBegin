//
//  main.cpp
//  Pointers
//
//  Created by Mark Calvelo on 10/12/25.
//

#include <iostream>

void manipulate(double *pValue) {
    std::cout << "2. Value of double in manipulate: " << *pValue << std::endl;
    *pValue = 10;
    std::cout << "3. Value of double in manipulate: " << *pValue << std::endl;
}

int main(int argc, const char * argv[]) {
    
    /*
     We have allocated some memory to a bucket in nValue
     */
    int nValue = 8;
    
    int *pnValue = &nValue; // pointer to the memory location of nValue
    
    std::cout << "int nValue: " << nValue << std::endl;
    std::cout << "pointer to int address: " << pnValue << std::endl;
    
    // we can use * to dereference the address and get the original value that is stored
    std::cout << "int value via pointer: " << *pnValue << std::endl;
    
    std::cout << "======" << std::endl;
    double dValue = 123.4;
    
    std::cout << "1. dValue: " << dValue << std::endl;
    manipulate(&dValue);
    std::cout << "4. dValue: " << dValue << std::endl;
    
    return 0;
}

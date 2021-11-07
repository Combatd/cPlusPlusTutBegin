//
//  main.cpp
//  FloatingPointTypes
//
//  Created by Mark Calvelo on 11/6/21.
//

#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    float floatValue = 76.4;
    
    std::cout << sizeof(float) << std::endl;
    std::cout << std::fixed << floatValue << std::endl;
    std::cout << std::setprecision(20) << std::fixed << floatValue << std::endl;
    
    return 0;
}

//
//  main.cpp
//  ComparingFloats
//
//  Created by Mark Calvelo on 9/10/25.
//

#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    float value1 = 1.1;
    
    // Less than 7 significant digits of float, can be "similar" with less than
    if(value1 < 1.11) {
        std::cout << "equals" << std::endl;
    } else {
        std::cout << "not equal << std::endl";
    }
    
    std::cout << std::setprecision(10) << value1 << std::endl;
    
    return 0;
}

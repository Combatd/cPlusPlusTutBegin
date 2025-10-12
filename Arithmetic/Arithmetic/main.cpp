//
//  main.cpp
//  Arithmetic
//
//  Created by Mark Calvelo on 10/12/25.
//

#include <iostream>

/*
 
 +
 -
 *
 /
 +=
 -=
 *=
 /=
 %
 %=
 precedence
 
 */

int main(int argc, const char * argv[]) {

    int value1 = 6 / 2;
//    double value2 =  7 / 2.0;
    double value2 = (double)7 / 2; // type cast
    
    int value3 = (int)7.3; // not rounding, throwing remaining decimals away
    
    std::cout << value1 << std::endl;
    std::cout << value2 << std::endl;
    std::cout << value3 << std::endl;
    
    int value4 = 8;
    value4 += 1; // value4 = value4 + 1;
    
    std::cout << value4 << std::endl;
    
    
    int value5 = 12 % 5;
    std::cout << value5 << std::endl;
    
    double equation = (5.3 / 4) + (2.3 * 6); // PERMDAS
    std::cout << equation << std::endl;
    
    std::string marker = "";
    for (int i = 0; i < 100; i++) {
        if (i % 10 == 0) {
            marker += "*";
            std::cout << marker << std::endl;
        }
    }
    
    return 0;
}

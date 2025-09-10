//
//  main.cpp
//  AdvancedConditions
//
//  Created by Mark Calvelo on 9/10/25.
//

/*
 == equality comparison operator
 != not equals
 < less than
 > greater than
 */

#include <iostream>

int main(int argc, const char * argv[]) {
    int value1 = 7;
    int value2 = 4;
    
    if(value1 > value2) {
        std::cout << "Condition 1: true" << std::endl;
    } else {
        std::cout << "Condition 1: false" << std::endl;
    }
    
    // false
    if(value1 == 7 && value2 < 3) {
        std::cout << "Condition 2: true" << std::endl;
    } else {
        std::cout << "Condition 2: false" << std::endl;
    }
    
    if(value1 == 7 || value2 == 4) {
        std::cout << "Condition 3: true" << std::endl;
    } else {
        std::cout << "Condition 3: false" << std::endl;
    }
    
    // Try to avoid "!=" because "==" is usually easier to read
    
    // both of the conditions on the left OR one condition on the right is to hit condition
    // standard convention wants ( ) when && and || are in the same branch of conditions
    if((value2 != 8 && value1 == 7) || value1 < 10) {
        std::cout << "Condition 4: true" << std::endl;
    } else {
        std::cout << "Condition 4: false" << std::endl;
    }
    
    bool isValue2notEightAndValue1Equal10 = (value2 != 8) && (value1 == 10);
    if(isValue2notEightAndValue1Equal10) {
        std::cout << "Condition 5: true" << std::endl;
    } else {
        std::cout << "Condition 5: false" << std::endl;
    }
    
    
    return 0;
}

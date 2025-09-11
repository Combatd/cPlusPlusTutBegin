//
//  main.cpp
//  WhileLoops
//
//  Created by Mark Calvelo on 9/10/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int i = 0;
    
    while (i <= 6) {
        std::cout << "Value of i: " << i << std::endl;
        
        // i = i + 1;
        i++;
        std::cout << "we incremented i to " << i << " and onto next iteration" << std::endl;
    }
    
    std::cout << "Program qutting..." << std::endl;
    
    return 0;
}

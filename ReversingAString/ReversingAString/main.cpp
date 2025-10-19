//
//  main.cpp
//  ReversingAString
//
//  Created by Mark Calvelo on 10/19/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    char test[] = "hello";
    
    for (int i = sizeof(test) / sizeof(char) - 2; i >= 0; i--) {
        std::cout << i << ": " << test[i] << std::endl;
    }
    
    return 0;
}

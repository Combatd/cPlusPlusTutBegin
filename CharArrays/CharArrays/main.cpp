//
//  main.cpp
//  CharArrays
//
//  Created by Mark Calvelo on 10/18/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    // char text[6] = {'h','e','l','l','o'};
    char text[] = "hello";
    
    std::cout << text << std::endl;
    
    for (int i = 0; i < sizeof(text); i++) {
        std::cout << i << ": " << text[i] << " " << std::flush;
    }
    
    int k = 0;
    
    while (true) {
        
        if (text[k] == 0) {
            break;
        }
        
        std::cout << text[k] << std::flush;
        
        k++;
    }
    
    return 0;
}

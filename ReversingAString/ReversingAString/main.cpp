//
//  main.cpp
//  ReversingAString
//
//  Created by Mark Calvelo on 10/19/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    char text[] = "hello";
    
    int nChars = sizeof(text) - 1;
    
    for (int i = sizeof(text) / sizeof(char) - 2; i >= 0; i--) {
        std::cout << i << ": " << text[i] << std::endl;
    }
    
    
    char *pStart = text;
    char *pEnd = text + nChars - 1;

    while(pStart < pEnd) {
        char tempStart = *pStart;
        *pStart = *pEnd;
        *pEnd = tempStart;
        
        pStart++;
        pEnd--;
    }
    
    std::cout << text << std::endl;
    
    return 0;
}

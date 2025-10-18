//
//  main.cpp
//  PointerArithmetic
//
//  Created by Mark Calvelo on 10/18/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    const int NSTRINGS = 5;
    
    std::string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};
    
    std::string *pTexts = texts;
    
    pTexts += 3;
    
    std::cout << *pTexts << std::endl;
    
    pTexts -= 2;
    
    std::cout << *pTexts << std::endl;
    
    std::string *pEnd = &texts[NSTRINGS - 1];
    pTexts = &texts[0];
    
    while (pTexts != pEnd) {
        std::cout << *pTexts << std::endl;
        pTexts++;
    }
    
    // Set pTexts back to start
    pTexts = &texts[0];
    
    long elements = (long)(pEnd - pTexts);
    
    std::cout << elements << std::endl;
    
    // set pTexts back to start
    pTexts = &texts[0];
    
    pTexts += NSTRINGS / 2;
    std::cout << *pTexts << std::endl;
    
    
    return 0;
}

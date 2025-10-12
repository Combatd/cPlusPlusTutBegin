//
//  main.cpp
//  PointersAndArrays
//
//  Created by Mark Calvelo on 10/12/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::string texts[] = {
        "one",
        "two",
        "three"
    };
    
    /*
     array variables and pointers are extremely similar
     array variables know how much data they are putting out
     array pointers only knows the size of the first block of data it is pointing at
     it does not know how many strings are in the array, or the size of the block of memory
     */
    std::string *pTexts = texts;
    
    std::cout << sizeof(texts) / sizeof(std::string) << std::endl;
    
    for (int i = 0; i < sizeof(texts) / sizeof(std::string); i++) {
        std::cout << pTexts[i] << " " << std::flush;
    }
    
    // if I want to dereference the pointer and get the actual array
    for (int i = 0; i < sizeof(texts) / sizeof(std::string); i++) {
        std::cout << *pTexts << " " << std::flush;
        
        // pTexts = pTexts + 1; // you are pointing the next block of data in memory address you are pointing at
        pTexts++;
    }
    
    std::string *pElement = texts;
    std::string *pEnd = &texts[(sizeof(texts) / sizeof(std::string)) - 1];
    
    while (true) {
        std::cout << *pElement << " " << std::flush;
        
        if (pElement == pEnd) {
            break;
        }
        
        pElement++; // next block of data in memory
    }
    
    return 0;
}

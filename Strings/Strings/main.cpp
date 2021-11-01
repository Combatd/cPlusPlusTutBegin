//
//  main.cpp
//  Strings
//
//  Created by Mark Calvelo on 11/1/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::string text1 = "Hello ";
    std::string text2 = "Fred";
    
    std::string text3 = text1 + text2; // string concatenation
    
    std::cout << text3 << std::endl;
    
    return 0;
}

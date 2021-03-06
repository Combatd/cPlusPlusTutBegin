//
//  main.cpp
//  CharAndBool
//
//  Created by Mark Calvelo on 11/7/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    bool bVal = false;
    
    std::cout << bVal << std::endl;
    
    char cVal = 55; // char takes up 1 byte, 55 is 7 in ascii character set
    char cValue = '7';
    std::cout << cVal << std::endl;
    std::cout << int(cValue) << std::endl; // => 55
    std::cout << "Size of char: " << sizeof(char) << std::endl;
    
    wchar_t wValue = 't'; // wchar_t is in unicode
    std::cout << (char)wValue << std::endl; // 4 bytes
    std::cout << "Size of wchar_tL " << sizeof(wchar_t) << std::endl;
    
    return 0;
}

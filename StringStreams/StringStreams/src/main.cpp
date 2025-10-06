//
//  main.cpp
//  StringStreams
//
//  Created by Mark Calvelo on 10/6/25.
//

#include <iostream>
#include <sstream>


int main(int argc, const char * argv[]) {
    std::string name = "Bob";
    int age = 32;
    
    /*
     * What if we want to combine these two into the same string to output later on?
     * include sstream class to convert other types for string
     */
    
    std::stringstream ss;
    
    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;
    
    // convert the stringstream back to string
    std::string info = ss.str();
    std::cout << info << std::endl;
    
    
    return 0;
}

//
//  main.cpp
//  ConstructorsAndMethodOverload
//
//  Created by Mark Calvelo on 10/6/25.
//

#include <iostream>
#include "Person.h"

int main(int argc, const char * argv[]) {
    
    Person person1;
    Person person2("Bob", 24);
    
    std::cout << person1.toString() << std::endl;
    std::cout << person2.toString() << std::endl;
    return 0;
}

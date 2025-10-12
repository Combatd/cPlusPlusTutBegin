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
    Person person2("Bob", 42);
    Person person3("Sue", 25);
    
    std::cout << person1.toString() << "; memory address: " << &person1 << std::endl;
    std::cout << person2.toString() << "; memory address: " << &person2 << std::endl;
    std::cout << person3.toString() << "; memory address: " << &person3 << std::endl;
    return 0;
}

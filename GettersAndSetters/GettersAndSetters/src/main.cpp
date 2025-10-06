//
//  main.cpp
//  GettersAndSetters
//
//  Created by Mark Calvelo on 10/6/25.
//

#include <iostream>
#include "Person.h"

int main(int argc, const char * argv[]) {
    
    Person person1;
    
    person1.setName("Georgina");
    
    std::cout << person1.toString() << std::endl;
    
    return 0;
}

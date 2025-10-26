//
//  main.cpp
//  Namespaces
//
//  Created by Mark Calvelo on 10/25/25.
//

#include "Cat.hpp"
#include "Animals.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    
    Animals::Cat cat1;
    cat1.speak();
    
    Felines::Cat cat2;
    cat2.speak();
    
    std::cout << Animals::CATNAME << std::endl;
    std::cout << Felines::CATNAME << std::endl;
}

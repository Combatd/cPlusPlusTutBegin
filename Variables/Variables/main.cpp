//
//  main.cpp
//  Variables
//
//  Created by Mark Calvelo on 11/1/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int numberCats = 5;
    int numberDogs = 7;
    int numberAnimals = numberCats + numberDogs;
    
    std::cout << "Number of cats: " << numberCats << std::endl;
    std::cout << "Number of dogs: " << numberDogs << std::endl;
    std::cout << "Total number of animals: " << numberAnimals << std::endl;
    
    std::cout << "New dog acquired!" << std::endl;
    
    numberDogs = numberDogs + 1;
    std::cout << "New number of dogs: " << numberDogs << std::endl;
    std::cout << "New number of animals: " << numberAnimals << std::endl;
    
    return 0;
}

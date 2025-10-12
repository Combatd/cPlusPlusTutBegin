//
//  Person.h
//  ConstructorsAndMethodOverload
//
//  Created by Mark Calvelo on 10/6/25.
//

#ifndef Person_h
#define Person_h

#include <iostream>

class Person {
private:
    std::string name;
    int age;
    
public:
    Person();
    // Person(std::string newName) { name = newName };
    // Person(std::string name, int age): name(name), age(age) {};
    Person(std::string name, int age);
    std::string toString();
};

#endif /* Person_h */

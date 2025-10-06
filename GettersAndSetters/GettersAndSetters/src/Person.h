//
//  Person.h
//  GettersAndSetters
//
//  Created by Mark Calvelo on 10/6/25.
//

#ifndef Person_h
#define Person_h

#include <iostream>

class Person {
private:
    std::string name;
    
public:
    Person();
    std::string toString();
    void setName(std::string newName);
    std::string getName();
};

#endif /* Person_h */

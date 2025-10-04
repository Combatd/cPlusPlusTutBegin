//
//  Cat.hpp
//  DataMembers
//
//  Created by Mark Calvelo on 10/4/25.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>

class Cat {
// hidden encapsulated data
private:
    std::string name;
    int age;
    bool happy = true;
    
public:
    void speak(); // prototype of speak method
    void jump();
    void makeHappy();
    void makeSad();
};

#endif /* Cat_hpp */

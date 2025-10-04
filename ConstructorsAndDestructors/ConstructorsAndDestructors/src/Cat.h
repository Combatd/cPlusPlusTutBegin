//
//  Cat.h
//  Classes
//
//  Created by Mark Calvelo on 10/4/25.
//

#ifndef Cat_h
#define Cat_h

class Cat {
private:
    bool happy;
public:
    void speak();
    void jump();
    void makeHappy();
    void makeSad();
    Cat(); // constructor
    ~Cat(); // destructor
};

#endif /* Cat_h */

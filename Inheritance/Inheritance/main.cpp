//
//  main.cpp
//  Inheritance
//
//  Created by Mark Calvelo on 10/26/25.
//

#include <iostream>
using namespace std;

class Animal {
    
public:
    void speak() {
        cout << "Grrr" << endl;
    }
};

class Cat: public Animal {
public:
    void jump() {
        cout << "Cat jumping" << endl;
    }
};

class Tiger: public Cat {
public:
    void attackPrey() {
        cout << "Attacking prey!" << endl;
    }
};

int main(int argc, const char * argv[]) {
    
    Cat cat1;
    cat1.speak(); // ==> "Grrr"
    cat1.jump(); // = "Cat jumping"
    
    Tiger tiger1;
    tiger1.speak();
    tiger1.jump();
    tiger1.attackPrey(); // => "Attacking prey!"
    
    return 0;
}

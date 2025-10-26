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

class Frog: public Animal {
private:
    string name;
private:
    void info() {
        cout << "hidden data that shouldn't be accessed outside the instance" << endl;
    }
public:
    Frog(string name): name(name) {}
    string getName() {
        return this->name;
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
    
    Frog frog1("Freddy");
    cout << frog1.getName() << endl;
    // cout << frog1.info() << endl; // only other methods inside the class can invoke Frog::info()
    
    return 0;
}

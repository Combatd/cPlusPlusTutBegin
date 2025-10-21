//
//  main.cpp
//  CopyConstructors
//
//  Created by Mark Calvelo on 10/20/25.
//

#include <iostream>
using namespace std;

class Animal {
private:
    string name;
    
public:
    Animal() { cout << "Animal Created" << endl; }
    Animal(const Animal &other) { name =(other.name); cout << "Animal created by copying" << endl; }
    void setName(string name) { this->name = name;  }
    void speak() const { cout << "My name is: " << name << endl; }
};

int main(int argc, const char * argv[]) {
    
    Animal animal1;
    animal1.setName("Freddy");
    
    Animal animal2 = animal1;
    animal2.setName("Bob");
    
    animal1.speak();
    animal2.speak();
    
    Animal animal3(animal1); // copy constructor instantiation
    animal3.speak(); // output is still "Freddy", but from the animal3 object
    
    return 0;
}

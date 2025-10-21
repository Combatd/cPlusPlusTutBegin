//
//  main.cpp
//  NewOperator
//
//  Created by Mark Calvelo on 10/21/25.
//

#include <iostream>

using namespace std;

class Animal {
private:
    string name;
    
public:
    Animal() {
        cout << "Animal Created" << endl;
    }
    
    Animal(const Animal &other) {
        name =(other.name); cout << "Animal created by copying" << endl;
    }
    
    ~Animal() {
        cout << "Destructor called." << endl;
    }
    
    void setName(string name) {
        this->name = name;
    }
    
    void speak() const {
        cout << "My name is: " << name << endl;
    }
};

Animal *createAnimal() {
    Animal *a = new Animal();
    a->setName("Fredo");
    return a;
}

int main(int argc, const char * argv[]) {
    Animal cat;
    cat.setName("Freddy");
    cat.speak();
    return 0;
}

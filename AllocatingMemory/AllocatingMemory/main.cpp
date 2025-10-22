//
//  main.cpp
//  AllocatingMemory
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
    Animal *pAnimal = new Animal();
    pAnimal->setName("Birtie");
    return pAnimal;
}

int main(int argc, const char * argv[]) {
    
    int *pInt = new int;
    *pInt = 9;
    cout << *pInt << endl;
    delete pInt;
    
    Animal *pAnimal = new Animal[10]();
    pAnimal[5].setName("George");
    pAnimal[5].speak();
    delete [] pAnimal;
    
    char *pMem = new char[1000]; // 1000 bytes
    delete [] pMem;
    
    char c = 'a';
    string name(1, c);
    cout << name << endl;
    
    return 0;
}

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
    void setName(string name) { this->name = name;  }
    void speak() const { cout << "My name is: " << name << endl; }
};

int main(int argc, const char * argv[]) {

    return 0;
}

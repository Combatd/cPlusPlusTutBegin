//
//  main.cpp
//  constkeyword
//
//  Created by Mark Calvelo on 10/19/25.
//

#include <iostream>
using namespace std;

class Animal {
private:
    string name;
    
public:
    void setName(string name) { this->name = name;  }
    void speak() { cout << "My name is: " << name << endl; }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

//
//  main.cpp
//  StaticKeyword
//
//  Created by Mark Calvelo on 10/26/25.
//

#include <iostream>
using namespace std;

/*
 * When we create a static variable, we need to initialize it somewhere
 * const static variables can be initialized upon declaration
 * static constants are generally static and accessible via the class and not instance
 */

class Test {
public:
    static const int MAX = 50;
private:
    int id;
    static int count;
public:
    Test() {
        id = count++;
    }
    
    static void showInfo() {
        cout << count << endl;
    }
    
    int getId() {
        return id;
    }
};

/*
 We don't need an object to access this attribute because it is static
 */
int Test::count = 7;

/*
 * static methods are tied to the class and not instantiated objects
 * they can only access static variables
 */


int main(int argc, const char * argv[]) {
    cout << Test::MAX << endl;
    Test::showInfo();
    Test test1;
    cout << test1.getId() << endl;
    Test test2;
    Test:: showInfo();
    cout << test2.getId() << endl;
    Test::showInfo();
    
    
    return 0;
}

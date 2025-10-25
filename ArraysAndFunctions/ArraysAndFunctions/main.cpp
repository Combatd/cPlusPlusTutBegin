//
//  main.cpp
//  ArraysAndFunctions
//
//  Created by Mark Calvelo on 10/25/25.
//

#include <iostream>

using namespace std;

void showText(string texts[], const int nElements) {
    
    for (int i = 0; i < nElements; i++) {
        cout << texts[i] << endl;
    }
}

void showTextPointerSize(string (&texts)[3])  {
    
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
        cout << texts[i] << endl;
    }
}

void getArray(string (&texts)[3]) {
    // don't return pointers to local variables! string numbers[] = {"1"};
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
        cout << texts[i] << endl;
    }
}

char * getMemory() {
    char *pMem = new char[100];
    
    return pMem;
}

void freeMemory(char *pMem) {
    delete [] pMem;
}

int main(int argc, const char * argv[]) {
    
    string texts[] = {"apple", "orange", "banana"};
    
    cout << sizeof(texts) / sizeof(string) << endl;
    
    showText(texts, 3);
    showTextPointerSize(texts);
    
    char *pMemory = getMemory();
    freeMemory(pMemory);
    
    return 0;
}

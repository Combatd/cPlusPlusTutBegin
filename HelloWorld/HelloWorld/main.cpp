//
//  main.cpp
//  HelloWorld
//
//  Created by Mark Calvelo on 10/30/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Starting program..." << std::flush; // std::cout is buffered, and the actual output is only printed once the buffer is full or some other flushing situation occurs (e.g. a newline in the stream). Sometimes you want to make sure that the printing happens immediately, and you need to flush manually.
    

    std::cout << "Hello there, world!" << std::endl;
    std::cout << "This is some text." << std::endl; // carraige return takes a line into a new line
    std::cout << "Banana." << " Apple." << " Orange." << std::endl;
    std::cout << "More text! \n";
    
    return 0;
}

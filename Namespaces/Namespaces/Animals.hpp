//
//  Animals.hpp
//  Namespaces
//
//  Created by Mark Calvelo on 10/25/25.
//

#ifndef Animals_hpp
#define Animals_hpp

#include <stdio.h>
#include <iostream>


namespace Animals {
std::string static CATNAME = "Clive";

class Cat {
    public:
        Cat();
        virtual ~Cat();
        void speak();
    };
}

#endif /* Animals_hpp */

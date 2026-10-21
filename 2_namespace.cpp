#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    // Namespace = Providers a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

    int x = 0;
    std::cout << x << "\n";
    std::cout << first::x << "\n"; // "::" two columns scope resolution operator
    std::cout << second::x << "\n";

    return 0;
}

int main2(){
    using namespace first;
    std::cout << x;
    std::cout << second::x;
    

    return 0;
}

// people use "using namespace std;" to save some code to write.
// we will do not use that as it have a lot of entity under standard namespace.




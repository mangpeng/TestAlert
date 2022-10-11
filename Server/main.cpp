#include <iostream>
#include <library.h>
#include <Network.h>

int main() {
    std::cout << "Main Hello, World!" << std::endl;
    hello();

    Network nw;
    nw.Print();

    return 0;
}

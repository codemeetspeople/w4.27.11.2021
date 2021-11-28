#include <iostream>
#include "Avatar.hpp"
#include "state/RifleMan.hpp"

int main() {
    Avatar av = Avatar();

    std::cout << av;
    av.attack();
    std::cout << std::endl;

    av.changeState(new RifleMan());

    std::cout << av;
    av.attack();

    return 0;
}

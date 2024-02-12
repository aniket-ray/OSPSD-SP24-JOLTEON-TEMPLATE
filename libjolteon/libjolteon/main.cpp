#include "./component.hpp"

#include <iostream>

int main() {
    std::cout << Jolteon::Component::sampleHelloWorldComponent() << std::endl;
    std::cout << "2 + 3 = " << Jolteon::Component::sampleAdderComponent(2, 3) << std::endl;
    return 0;
}

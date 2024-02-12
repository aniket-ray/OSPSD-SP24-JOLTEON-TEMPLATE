#include "component.hpp"

namespace Jolteon {
    namespace Component {
        std::string sampleHelloWorldComponent() {
            return "Hello World";
        }

        int64_t sampleAdderComponent(int64_t num1, int64_t num2) {
            return num1 + num2;
        }
    }   
}

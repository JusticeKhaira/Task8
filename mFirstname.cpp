#include <iostream>
#include "Person.h"

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);

    float totalWeight = Jane + John;

    std::cout << "Total weight: " << totalWeight << std::endl;

    if (Jane == John) {
        std::cout << "This is the same person" << std::endl;
    } else {
        std::cout << "This is NOT the same person" << std::endl;
    }

    return 0;
}

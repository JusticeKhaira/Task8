#include <iostream>
#include "Person.h"

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);

    float totalWeight = Jane + John;
    std::cout << "Total weight: " << totalWeight << std::endl;

    if (Jane < John) {
        std::cout << "Jane is younger than John" << std::endl;
    }
    if (John > Jane) {
        std::cout << "John is older than Jane" << std::endl;
    }

    return 0;
}

#include <iostream>
#include "Person.h"

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);

    float totalWeight = Jane + John;
    std::cout << "Total weight: " << totalWeight << std::endl;

    std::string janeFirstName = Jane;
    float janeWeight = Jane;
    std::cout << "Jane's First Name: " << janeFirstName << std::endl;
    std::cout << "Jane's Weight: " << janeWeight << std::endl;

    return 0;
}

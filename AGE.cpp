#include <iostream>
#include "Person.h"

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);

    
    float totalWeight = Jane + John;
    std::cout << "Total weight: " << totalWeight << std::endl;


    int johnAge = John;
    std::cout << "John's Age: " << johnAge << std::endl;

    return 0;
}

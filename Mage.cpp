#pragma once

#include <string>

class Person {
public:
    
    Person();
    Person(float newWeight);
    ~Person();
    
    float operator+(const Person& otherPerson);

    operator int();

private:
    float mWeight;
    std::string mFirstName;
    int mAge;
};

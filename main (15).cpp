#pragma once

#include <string>

class Person {
public:
    // Constructors and destructor
    Person();
    Person(float newWeight);
    ~Person();

    // Overloaded addition operator
    float operator+(const Person& otherPerson);

    // Conversion operator to int
    operator int() const;

    // Conversion operator to string (for first name)
    operator std::string() const;

    // Conversion operator to float (for weight)
    operator float() const;

private:
    float mWeight;
    std::string mFirstName;
    int mAge;
};

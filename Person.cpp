#include "Person.h"
#include <iostream>

Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

Person::Person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

Person::~Person() {}
float Person::operator+(const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}

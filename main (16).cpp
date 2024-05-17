#include "Person.h"

Person::operator int() const {
    return mAge;
}

Person::operator std::string() const {
    return mFirstName;
}

Person::operator float() const {
    return mWeight;
}

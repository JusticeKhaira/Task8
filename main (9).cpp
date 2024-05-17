#include <string>

class Person {
public:
    Person();
    Person(float newWeight);
    ~Person();

    float operator+(const Person& otherPerson)
    bool operator!=(const Person& otherPerson) const;

private:
    float mWeight;
    std::string mFirstName;
    int mAge;
    
bool Person::operator!=(const Person& otherPerson) const {
    return mFirstName != otherPerson.mFirstName;
}

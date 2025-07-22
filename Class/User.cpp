#include "User.h"
#include <iostream>


User::User(const std::string& firstName, const std::string& lastName,
           unsigned short int age, const std::string& location)
    : firstName(firstName), lastName(lastName), age(age), location(location) {}

std::string User::getFirstName() const {
    return firstName;
}

std::string User::getLastName() const {
    return lastName;
}

unsigned short int User::getAge() const {
    return age;
}

std::string User::getLocation() const {
    return location;
}

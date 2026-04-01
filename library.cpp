// library.cpp -- implementation file for the library of classes

#include "library.h"
#include <iostream>

// -------------------------------------
Person::Person() 
: full_name(""), date_birth(""), gender(other) {}

Person::Person(std::string n, std::string d, Gender g)
: full_name(n), date_birth(d), gender(g) {}

Person::~Person() {}

std::ostream& operator<<(std::ostream& os, const Gender& g) {
    if (g==male) { return os << "Male"; }
    else if (g==female) { return os << "Female"; }
    else { return os << "Other"; }
}

void Person::display() const {
    std::cout << "Name: " << full_name << std::endl;
    std::cout << "Date of Birth: " << date_birth << std::endl;
    std::cout << "Gender: " << gender << std::endl;
}

std::string Person::get_name() const {
    return full_name;
}



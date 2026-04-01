// library.h -- header file for the library of classes

#ifndef LIBRARY_H_
#define LIBRARY_H_

#include <string>

const double COURSE_SIZE = 6*6; // 6 courses, 6 students per course
const enum Gender { male, female, other };

// abstract Person class-----------------------------------------
class Person {
protected:
    std::string full_name;
    std::string date_birth;
    Gender gender;

public:
    Person();
    Person(std::string n, std::string d, Gender g);

    // pure destructor
    virtual ~Person() = 0;  // abstract class, virtual helps for derived classes

    // since gender (enum) -- overload the ostream << 
    friend std::ostream& operator<<(std::ostream& os, const Gender& g);
    virtual void display() const; // virtual helps for derived classes to override

    virtual std::string get_name() const =0; // pure virtual function, must be implemented by derived classes
};

//-------------------------------------------------------------
// Student class derived from Person--------------------------------
class Student : public Person {
private:
    double gpa;
};


#endif // LIBRARY_H_
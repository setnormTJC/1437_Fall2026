//
// Created by Work on 11/4/2026.
//

#include "Person.h"

#include <iostream>

bool Person::operator<(const Person &rhsPerson)
{
    if (name < rhsPerson.name)
    {
        return true;
    }

    //do we want to handle equal ages? Let's keep it simple for now
    return false;
}


void Person::showThis()
{
    std::cout << "This is: " << this << std::endl;
}

std::ostream & operator<<(std::ostream &os, const Person &person)
{
    os << person.name << "is this many years old: " << person.age << std::endl;

    return os;
}

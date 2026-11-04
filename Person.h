//
// Created by Work on 11/4/2026.
//

#ifndef INC_1437_FALL2026_PERSON_H
#define INC_1437_FALL2026_PERSON_H

#include<ostream>
#include <string>


class Person
{
public:
    std::string name;
    int age{}; //bothers Joshua Tucker -> sets age to 0

    bool operator < (const Person& rhsPerson ); //what is the "arity" of the < operator (usually)? 5 < 4

    friend std::ostream& operator << (std::ostream& os, const Person& person);

    void showThis();
};


#endif //INC_1437_FALL2026_PERSON_H

//this is another way (non-member/free function approach)
bool operator < (const Person& lhs, const Person& rhsPerson);
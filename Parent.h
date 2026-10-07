//
// Created by Work on 10/7/2026.
//

#ifndef INC_1437_FALL2026_PARENT_H
#define INC_1437_FALL2026_PARENT_H
#include <string>


class Parent
{
protected: //access modifier/specifier
    float money = 0.0f;
    int age = 0;
    std::string eyeColor = "blue";
// private:

public:
    Parent();

    Parent(float money, const std::string& eyeColor = "green");

    /*virtual*/ void liveLife(); //what does VIRTUAL mean here?

    // friend class SomeClass;  //we'll talk about this later
};


#endif //INC_1437_FALL2026_PARENT_H


class Child : public Parent //private inheritance can also be used (niche)
{
    //distinguishing attributes of a child?
    //private -> enforcer permissions (Linux -drwx---- UGO)

public:
    void liveLife() /*override*/;

    void withDrawMoney(float howMuchMoney);

};

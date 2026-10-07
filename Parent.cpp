//
// Created by Work on 10/7/2026.
//

#include "Parent.h"

#include<iostream>


Parent::Parent()
{
}

Parent::Parent(float money, const std::string &eyeColor)
    :
money(money), eyeColor(eyeColor)
{
}

void Parent::liveLife()
{
    std::cout << "Living life as a parent" << std::endl;
}

void Child::liveLife()
{
    std::cout << "I am a CHILD - and I'm smarter and BETTER than my parent - I'll live life my own way"
    << std::endl;

}

void Child::withDrawMoney(float howMuchMoney)
{
    money -= howMuchMoney;
}

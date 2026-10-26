//
// Created by Work on 10/19/2026.
//

#ifndef INC_1437_FALL2026_DEMOS_H
#define INC_1437_FALL2026_DEMOS_H
#include <string>


class BigClass
{
    std::string firstString;
    std::string secondString;
    std::string thirdString;
};

void demoSTDqueue();

void demoPointers();

///@brief note that a C-style is array is STATIC (size cannot change - because it is "stack-allocated"
///(as opposed to "heap-allocated"
void demoCStyleArrays();

void demoDynamicMemory();

void demoPolymorphism();







#endif //INC_1437_FALL2026_DEMOS_H

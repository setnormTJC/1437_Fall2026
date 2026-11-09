//
// Created by Work on 11/9/2026.
//

#ifndef INC_1437_FALL2026_CUSTOMVECTOR_H
#define INC_1437_FALL2026_CUSTOMVECTOR_H

#include<iostream>
#include <vector>

// template<typename T>
// void doThing(T somedata);

template<typename T>
class CustomVector
{
    std::vector<T> thangs; //Rick Grimes -> walking dead

public:
    void getDataTypeOfElements() const
    {
        std::cout << "The data type of the thing is: " << typeid(T).name() << std::endl;
    }
};




#endif //INC_1437_FALL2026_CUSTOMVECTOR_H

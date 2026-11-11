//
// Created by Work on 11/11/2026.
//

#ifndef INC_1437_FALL2026_MYVECTOR_H
#define INC_1437_FALL2026_MYVECTOR_H
#include<memory>


//we will "templatize" this later on
class MyVector
{
    // std::unique_ptr<char> pData; //previous approach - limited to a SINGLE char -> does not support use of [] operator
    std::unique_ptr<char[]> pData;
    size_t mSize = 0; //in corecrt.h, evidently
    size_t mCapacity = 0;

public:
    MyVector(); //= default does what?
    MyVector(size_t initialSize, char initialValueOfAllElements);

    void reallocate(); //pass newCapacity as param here? How about we keep this burden off of the client?

    //alternative function "name": overload the subscript operator ...
    void modifyIndex(size_t index, char newData);

    //pushBack()
    //pushFront() //is this a good idea?

    //insert() ...does insert OVERWRITE a value at a given index? Or "should" it shift elements to the "left" or "right"?

    //pushBack (MIGHT be necessary to REALLOCATE)
    //inplaceMerge() -> need for mergeSort
    //outofPlaceMerge()

    //eraseSingleInstanceOf

    //find

    //sequentialSearch();
    //somewhatStupidSort();
};


#endif //INC_1437_FALL2026_MYVECTOR_H

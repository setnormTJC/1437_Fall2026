//
// Created by Work on 11/11/2026.
//

#include "MyVector.h"

#include <iostream>


MyVector::MyVector() = default;

MyVector::MyVector(size_t initialSize, char initialValueOfAllElements)
{

    pData = std::make_unique<char[]>(initialSize);

    for (size_t i = 0; i < initialSize; ++i)
    {
        pData.operator[](i) = initialValueOfAllElements;
        //equivalently (and more simply): pData[i] = initialValueOfAllElements
    }

    mSize = initialSize;
    mCapacity = mSize; //perhaps we "should" make capacity double the initial size?
}

void MyVector::reallocate()
{
    std::unique_ptr<char[]> pTemporaryCopy;

    pTemporaryCopy = std::make_unique<char[]>(mSize);

    for (size_t i = 0; i < mSize; ++i)
        pTemporaryCopy[i] = pData[i];

    //greedy or conservative?
    //double the capacity or 1.5x ... or 1.1x? ... or just add 1?
    size_t scalingFactor = 2;
    mCapacity = mCapacity * scalingFactor;

    pData = std::make_unique<char[]>(mCapacity);

    //now get the old data back from the copy (copy will get destroyed/deallocated at end of this function):
    for (size_t i = 0; i < mSize; ++i)
        pData[i] = pTemporaryCopy[i];
}

void MyVector::modifyIndex(size_t index, char newData)
{
    //safety first:
    if (index < 0 || index > mCapacity)
    {
        throw std::runtime_error("Went out of bounds"); //make MyException class later
        //note the lack of return;
    }

    if (index > mSize - 1)
    {
        mSize++;
    }

    pData[index] = newData;
}


//
// Created by Work on 11/11/2026.
//

#ifndef INC_1437_FALL2026_MYVECTOR_H
#define INC_1437_FALL2026_MYVECTOR_H
#include<memory>


template<typename T>
class MyVector
{
    // std::unique_ptr<char> pData; //previous approach - limited to a SINGLE char -> does not support use of [] operator
    std::unique_ptr<T[]> pData;
    size_t mSize = 0; //in corecrt.h, evidently
    size_t mCapacity = 0;

public:
    MyVector() = default;
    MyVector(size_t initialSize, T initialValueOfAllElements)
    {
        pData = std::make_unique<T[]>(initialSize);

        for (size_t i = 0; i < initialSize; ++i)
        {
            pData.operator[](i) = initialValueOfAllElements;
            //equivalently (and more simply): pData[i] = initialValueOfAllElements
        }

        mSize = initialSize;
        mCapacity = mSize; //perhaps we "should" make capacity double the initial size?
    }

    void reallocate() //pass newCapacity as param here? How about we keep this burden off of the client?
    {
        std::unique_ptr<T[]> pTemporaryCopy;

        pTemporaryCopy = std::make_unique<T[]>(mSize);

        for (size_t i = 0; i < mSize; ++i)
            pTemporaryCopy[i] = pData[i];

        //greedy or conservative?
        //double the capacity or 1.5x ... or 1.1x? ... or just add 1?
        size_t scalingFactor = 2;
        mCapacity = mCapacity * scalingFactor;

        pData = std::make_unique<T[]>(mCapacity);

        //now get the old data back from the copy (copy will get destroyed/deallocated at end of this function):
        for (size_t i = 0; i < mSize; ++i)
            pData[i] = pTemporaryCopy[i];
    }

    //alternative function "name": overload the subscript operator ...
    void modifyIndex(size_t index, char newData)
    {
        //safety first:
        if (index < 0 || index > mCapacity)
        {
            //if index > mCapacity, "should" we reallocate??
            throw std::runtime_error("Went out of bounds"); //make MyException class later
            //note the lack of return;
        }

        if (index > mSize - 1)
        {
            mSize++;
        }

        pData[index] = newData;
    }

    size_t sequentialSearch(char target)
    {
        for (size_t i = 0; i < mSize; ++i)
        {
            if (pData[i] == target)
            {
                return i;
            }
        }

        //"worst case" input:
        return -1;

    }

    void swap(size_t lhsIndex, size_t rhsIndex)
    {
        //insert safety checks! (bounds checks)

        T temporaryCopy = pData[lhsIndex];
        pData[lhsIndex] = pData[rhsIndex];

        pData[rhsIndex] = temporaryCopy;
    }


    //binarySearch();

    ///@brief modifies pData, does NOT return a new, sorted array
    void ascendingNaiveSort()
    {
        for (size_t leftPos = 0; leftPos < mSize - 1; ++leftPos)
        {
            for (size_t rightPos = leftPos + 1; rightPos < mSize; ++rightPos)
            {
                if (pData[leftPos] > pData[rightPos])
                {
                    swap(leftPos, rightPos);
                }

            }
        }
    }

    void print(const std::string& separator)
    {
        for (int i = 0; i < mSize; ++i)
        {
            std::cout << pData.operator[](i) << separator;
        }
    }

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

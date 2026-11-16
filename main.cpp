
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

#include"MyVector.h"

int main()
{
    std::vector<int> nums; //this is just here for "inspiration"

    size_t initialSize = 5;
    char initialValueOfAllElements = 'Z';

    try
    {

        MyVector myVector(initialSize, initialValueOfAllElements); //allocates space for 5 chars and sets all 5 bytes to 00 (the "NULL" character)

        myVector.modifyIndex(0, 'c');
        myVector.modifyIndex(1, 'a');
        myVector.modifyIndex(2, 'b');
        myVector.modifyIndex(3, 'd');
        myVector.modifyIndex(4, 'e');

        char charToSearchToFor = 'i';

        int locationOfTarget = myVector.sequentialSearch(charToSearchToFor);
        if (locationOfTarget != - 1)
        {
            std::cout << "Found " << charToSearchToFor << " at index = " << locationOfTarget << std::endl;
        }

        else
        {
            std::cout << "Not found :(" << std::endl;
        }

        myVector.ascendingNaiveSort();

        int dummyBreakPoint;

    }

    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}




#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

#include"MyVector.h"

int main()
{
    std::vector<int> nums; //this is just here for "inspiration"

    size_t initialSize = 3;
    char initialValueOfAllElements = 'Z';

    try
    {
        MyVector myVector(initialSize, initialValueOfAllElements); //allocates space for 5 chars and sets all 5 bytes to 00 (the "NULL" character)

        myVector.modifyIndex(0, 'a');
        myVector.modifyIndex(1, 'b');
        myVector.modifyIndex(2, 'c');

        myVector.reallocate(); //doubles the capacity (with current implementation)

        myVector.modifyIndex(3, 'd');

    }

    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}



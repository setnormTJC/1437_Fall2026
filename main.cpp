
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

#include"MyVector.h"

int main()
{
    //std::vector<int> nums; //this is just here for "inspiration"


    try
    {
        size_t N = 100; //N is the size of the "problem" (or dataset)
        int initialValueOfElements = 0;
        MyVector<int> nums(N, initialValueOfElements);

        for (int i = 0; i < N; ++i)
        {
            nums.modifyIndex(i, rand() % 100);
        }

        std::cout << "Before sorting: " << std::endl;
        std::string separator = " ";
        nums.print(separator);

        nums.ascendingNaiveSort();

        std::cout << "AFTER sorting: " << std::endl;
        nums.print(separator);



    }

    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}



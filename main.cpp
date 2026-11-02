

#include<filesystem>
#include<iostream>
#include<memory>
#include<queue>
#include<string>

#include "Animal.h"
#include "Box.h"
#include "Shape.h"
#include "ChaseExplorations.h"
#include "CustomVector.h"
#include "demos.h"
#include "Parent.h"
#include "SandwichShop.h"



int main()
{
    //Shape shape; this is abstract and can not be made

    // std::vector<int> nums1 = {1, 2, 3};
    // std::vector<int> nums2 = {1, 2, 3};
    // std::vector<int> nums3 = nums1 + nums2; //no bueno

    CustomVector customVector1({1, 2, 3});

    CustomVector customVector2({4, 5, 6});

    CustomVector customVector3 = customVector1 + customVector2;

    if (customVector1 == customVector2)
    {
        std::cout << "The two vectors are the same." << std::endl;
    }
    else
    {
        std::cout << "Not the same" << std::endl;
    }


    int a = 123;


    //demoPolymorphism();
    //
    //pWildcat->makeSound();
    // Wildcat wildcat;
    //
    // wildcat.makeSound();


    return 0;
}



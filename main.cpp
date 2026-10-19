

#include<filesystem>
#include<iostream>
#include<queue>
#include<string>

#include "Animal.h"
#include "Box.h"
#include "demos.h"
#include "Parent.h"
#include "SandwichShop.h"



int main()
{
    std::cout << "Size of \"big\" class: "  << sizeof(BigClass) << std::endl;
    std::cout << "Size of \"big\" class POINTER: "  << sizeof(BigClass*) << std::endl;
    std::cout << "Size of \"big\" class REFERENCE: "  << sizeof(BigClass&) << std::endl;


    std::cout << "Size of a string in bytes: " << sizeof(std::string) << std::endl;
    demoPointers();

    // Parent parent(123.45, "brown");
    //
    // Child child;
    //
    // child.withDrawMoney(12.34);
    //
    // child.liveLife();
    // Rectangle rectangle(1, 2);
    //
    // Box box(rectangle, 3);



    return 0;
}



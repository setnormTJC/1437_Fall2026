//
// Created by Work on 10/19/2026.
//

#include "demos.h"

#include <iostream>
#include <queue>
#include <string>





void demoSTDqueue()
{
    std::queue<std::string> customers;
    // std::priority_queue<> //We'll talk about it later.

    customers.push("Alice");
    customers.push("Bob");
    customers.push("Carol");

    customers.pop();

    std::cout << "Front customer name: " << customers.front() << "\n";
    std::cout << "BACK (rear) customer name: " << customers.back() << "\n";
}

void demoPointers()
{
    int a = 255;

    int* memoryAddressOfA = &a; //ampersand is the "address of" operator (gets the address of a variable)

    //the asterisk (star) means this is a POINTER data type

    // std::cout << "Size of DOUBLE in bytes: " << sizeof(double) << std::endl;
    std::cout << "Initial memory address:" << memoryAddressOfA << std::endl;

    std::cout << "What we get when we type *memoryAddressOfA: " << *memoryAddressOfA <<std::endl;
    //this is called "dereferencing" a pointer

    *memoryAddressOfA = 456;
    std::cout << "After updating, the NEW value of the dereferenced pointer is: " << *memoryAddressOfA << std::endl;
    // memoryAddressOfA++; //increment the pointer
    // std::cout << "After incrementing memory address:" << memoryAddressOfA << std::endl;


}


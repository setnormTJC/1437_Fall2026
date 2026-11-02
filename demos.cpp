// //
// // Created by Work on 10/19/2026.
// //
//
// #include "demos.h"
//
// #include <iostream>
// #include <memory>
// #include <queue>
//
// #include <string>
//
// #include "Animal.h"
// #include "Parent.h"
//
//
// void demoSTDqueue()
// {
//     std::queue<std::string> customers;
//     // std::priority_queue<> //We'll talk about it later.
//
//     customers.push("Alice");
//     customers.push("Bob");
//     customers.push("Carol");
//
//     customers.pop();
//
//     std::cout << "Front customer name: " << customers.front() << "\n";
//     std::cout << "BACK (rear) customer name: " << customers.back() << "\n";
// }
//
// void demoPointers()
// {
//     int a = 255;
//
//     int* memoryAddressOfA = &a; //ampersand is the "address of" operator (gets the address of a variable)
//
//     //the asterisk (star) means this is a POINTER data type
//
//     // std::cout << "Size of DOUBLE in bytes: " << sizeof(double) << std::endl;
//     std::cout << "Initial memory address:" << memoryAddressOfA << std::endl;
//
//     std::cout << "What we get when we type *memoryAddressOfA: " << *memoryAddressOfA <<std::endl;
//     //this is called "dereferencing" a pointer
//
//     *memoryAddressOfA = 456;
//     std::cout << "After updating, the NEW value of the dereferenced pointer is: " << *memoryAddressOfA << std::endl;
//     // memoryAddressOfA++; //increment the pointer
//     // std::cout << "After incrementing memory address:" << memoryAddressOfA << std::endl;
//
//
// }
//
//
// void demoCStyleArrays()
// {
//     // int* pNums; //...
//     int nums[5] =
//     {
//         256, 2, 3, 4, 5
//     };
//
//     // nums++;
//     std::cout << nums << std::endl; //does this print 1, 2, 3, 4, 5?
//
//
// }
//
// void demoDynamicMemory()
// {
//     std::cout << "How many numbers do you want in your array?" << std::endl;
//     int desiredNumber;
//     std::cin >> desiredNumber;
//
//     // int nums[desiredNumber];
//     int* ptrToArray = new int[desiredNumber];
//     ptrToArray[0] = 257;
//     ptrToArray[1] = 19;
//     ptrToArray[2] = 10;
//
//     //OpenComputerVision
//
//     int dummyBreakpointVar = 123;
//
// }
//
// void demoPolymorphism()
// {
//     std::vector<std::unique_ptr<Parent>> pPeople;
//
//     std::unique_ptr<Parent> pParent = std::make_unique<Parent>(123.45); //prefix p makes it OBVIOUS that we're dealing with pointers
//     //Hungarian notation
//
//     std::unique_ptr<Parent> pChild = std::make_unique<Child>(); //calls default constructor of Child class
//
//     pPeople.push_back(std::move(pParent));
//     pPeople.push_back(std::move(pChild));
//
//     //call all people to live their lives:
//     pPeople[0]->liveLife();  //calls the parent
//     pPeople[1]->liveLife();  //calls the child
//
// }
//
// void demoConfusingPolymorphism()
// {
//     Animal animal;
//
//     std::vector<std::unique_ptr<Animal>> pZoo;
//
//     std::unique_ptr<Animal> pFox = std::make_unique<Animal>();
//     std::unique_ptr<Animal> pWildcat = std::make_unique<Wildcat>();
//
//     pZoo.push_back(std::move(pWildcat));
//     pZoo.push_back(std::move(pFox));
//
//     causeARiotAtTheZoo(std::move(pZoo));
// }
//

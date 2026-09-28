

#include<filesystem>
#include<iostream>
#include<queue>

#include "Animal.h"
#include "SandwichShop.h"




void demoSTDqueue()
{
    std::queue<std::string> customers;
    // std::priority_queue<>

    customers.push("Alice");
    customers.push("Bob");
    customers.push("Carol");

    customers.pop();

    std::cout << "Front customer name: " << customers.front() << "\n";
    std::cout << "BACK (rear) customer name: " << customers.back() << "\n";

}


int main()
{

    //Customer customer;

    SandwichShop joesSandwichShop;

    Customer firstCustomer("bob");

    joesSandwichShop.checkoutCustomer(firstCustomer);

    int a = 123;
    //
    // joesSandwichShop.simulateADayInTheLife();




    return 0;
}





#include<filesystem>
#include<iostream>
#include<queue>

#include "Animal.h"
#include "SandwichShop.h"


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


int main()
{
    //Customer firstCustomer("bob", 123.45);

    //suppose a bunch of people are lined up outside before the sandwich shop opens up
    std::queue<Customer> customers;
    customers.push({"Alice", 12.34});

    //SandwichShop joesSandwichShop;
    SandwichShop joesSandwichShop(customers);

    joesSandwichShop.simulateADayInTheLife();

    return 0;
}





#include<filesystem>
#include<iostream>
#include<queue>

#include "Animal.h"
#include "Parent.h"
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
    Parent parent(123.45, "brown");

    Child child;

    child.withDrawMoney(12.34);

    child.liveLife();

    return 0;
}



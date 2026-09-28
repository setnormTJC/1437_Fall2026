//
// Created by Work on 9/28/2026.
//

#include "SandwichShop.h"

#include <iostream>
#include<string>

// double Customer::order()
// {
//
// }

Customer::Customer(const std::string &name)
    :
name(name)
{
}

std::string Customer::getName() const
{
    return name;
}

SandwichShop::SandwichShop()
{
    theMenu.insert({"Turkey bacon club", 11.99});
    theMenu.insert({"Ham and cheese", 9.99});
    theMenu.insert({"PB & J", 7.99});
}

void SandwichShop::checkoutCustomer(Customer &customer)
{
    std::cout << "Hello, " << customer.getName() << "\n";
    std::cout << "This is our menu: \n";

    printMenu();

    std::cout << "Enter the item you want:\n";

    std::string customerItem;
    std::getline(std::cin, customerItem);

    if (theMenu.find(customerItem) != theMenu.end()) //this means the customer CORRECTLY chose something on the menu
    {
        revenue += theMenu[customerItem];
    }

    else
    {
        std::cout << "That ain't on the menu\n";
        //revenue += 0.0;
    }

    // revenue += customer.order();

}

void SandwichShop::printMenu() const
{
    //loops through the map (which was filled with goodies) in the default constructor
    for (const auto& currentMenuItem : theMenu)
    {
        std::cout << currentMenuItem.first << " --$" << currentMenuItem.second << "\n";
    }
}


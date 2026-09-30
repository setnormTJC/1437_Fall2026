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

Customer::Customer(const std::string &name, double balance)
    :
name(name),
bankAccountBalance(balance)
//member initializer syntax
{
    //empty?
}

std::string Customer::getName() const
{
    return name;
}

double Customer::getBankAccountBalance() const
{
    return bankAccountBalance;
}

void Customer::subtractMoneyFromBankAccount(double amountToSubtract)
{
    bankAccountBalance -= amountToSubtract; //-=
}

SandwichShop::SandwichShop()
{
    theMenu.insert({"Turkey bacon club", 11.99});
    theMenu.insert({"Ham and cheese", 9.99});
    theMenu.insert({"PB & J", 7.99});
}

SandwichShop::SandwichShop(const std::queue<Customer> &customers)
    :
checkoutLine(customers)
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
        double chosenSandwichCost = theMenu[customerItem];
        if (customer.getBankAccountBalance() >= chosenSandwichCost)
        {
            customer.subtractMoneyFromBankAccount(chosenSandwichCost);
            revenue += chosenSandwichCost;
        }

        else
        {
            std::cout << "You don't have enough money for that item" << std::endl;
        }
    }

    else
    {
        std::cout << "That ain't on the menu" << std::endl;
    }

}

void SandwichShop::simulateADayInTheLife()
{
    while (checkoutLine.empty() == false)
    {
        Customer currentCustomer = checkoutLine.front();
        checkoutCustomer(currentCustomer);
        checkoutLine.pop(); //removes current customer
    }
}

void SandwichShop::printMenu() const
{
    //loops through the map (which was filled with goodies) in the default constructor
    for (const auto& currentMenuItem : theMenu)
    {
        std::cout << currentMenuItem.first << " --$" << currentMenuItem.second << std::endl;
    }
}


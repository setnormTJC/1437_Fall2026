//
// Created by Work on 9/28/2026.
//

#ifndef INC_1437_FALL2026_SANDWICHSHOP_H
#define INC_1437_FALL2026_SANDWICHSHOP_H

#include<map>
#include<queue>
#include <string>

class Customer
{
    std::string name;
    double bankAccountBalance = 0.0;
    // double orderCost = 0.0;

public:
    Customer() = default;
    Customer (const std::string& name, double balance);

    std::string getName() const;

    double getBankAccountBalance() const; //getters do not generally modify member variable values

    void subtractMoneyFromBankAccount(double amountToSubtract);
};


class SandwichShop
{
//private:
    std::queue<Customer> checkoutLine;
    // std::queue<Customer> lane2;

    std::map<std::string, double> theMenu;

    double revenue = 0.0;

public:
    SandwichShop();

    SandwichShop(const std::queue<Customer>& customers);

    ///@brief check if either lane is empty?
    void checkoutCustomer(Customer &customer);

    ///@brief prints the customers who come in and then prints <br>
    ///the total earnings for the day
    void simulateADayInTheLife();

private:
    ///"helper" function
    void printMenu() const; //declare

};


#endif //INC_1437_FALL2026_SANDWICHSHOP_H

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
    // double orderCost = 0.0;

public:

    //
    Customer (const std::string& name);

    ///@returns the orderCost
    //double order();
    std::string getName() const;

    Customer() = default;
};


class SandwichShop
{
//private:
    std::queue<Customer> lane1;
    std::queue<Customer> lane2;

    std::map<std::string, double> theMenu;

    double revenue = 0.0;

public:
    SandwichShop();

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

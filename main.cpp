

#include<filesystem>
#include<iostream>

#include "Animal.h"


class Car
{
    std::string make = "Ford";
    int numberOfMiles = 99'999;

    //int someNumber = INT_MAX + 1; //overflows!

    Car() = default;
    // Car(/*insert params here*/)
    // {
    //
    // }

    ///@brief based on car's make and mileage, estimates a USD value
    double calculateCarValue()
    {
        double value = 0.0;

        if (make == "Toyota")
        {
            value += 3'000;
        }

        else if (make == "Ford")
        {
            value += 500;
        }

        return value;
    }

};



void demoFilesystemStuff()
{
    std::filesystem::directory_iterator directoryIterator("."); //parameterized constructor of the
    //directory_iteratory class (inside the filesystem namespace)

    for (const auto& directoryEntry : directoryIterator)
    {
        if (directoryEntry.path().string().find(".txt") != std::string::npos)
        {
            //std::cout << directoryEntry.path() << "\n";

            // std::cout << directoryEntry.file_size() << "\n";

            //directoryEntry.
        }

    }

}


int main()
{
    // Animal animal;
    // animal.age = 123;
    //
    // Human me;
    // me.
    // Ingredient ingredient;
    //
    // ingredient.printIngredients();

    int chaseAge = 27;
    std::string chaseSpecies = "Homo sapiens";
    double chaseLungVolume = 3.0;//liters
    double chaseThumbWidth = 1.5; //cm

    Human chase(chaseAge, chaseSpecies, chaseLungVolume, chaseThumbWidth);

    // chase.print();


    return 0;
}



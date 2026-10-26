

#include<filesystem>
#include<iostream>
#include<memory>
#include<queue>
#include<string>

#include "Animal.h"
#include "Box.h"
#include "ChaseExplorations.h"
#include "demos.h"
#include "Parent.h"
#include "SandwichShop.h"

void causeARiotAtTheZoo(std::vector<std::unique_ptr<Animal>> pZoo)
{
    // for (auto pointerToCurrentAnimal : pZoo)
    for (int i = 0; i < pZoo.size(); ++i)
    {
        pZoo[i]->makeSound();
        std::system("pause");
    }
}

int main()
{
    //demoPolymorphism();
    //Animal a;

    std::vector<std::unique_ptr<Animal>> pZoo;

    std::unique_ptr<Animal> pFox = std::make_unique<Fox>();
    std::unique_ptr<Animal> pWildcat = std::make_unique<Wildcat>();

    pZoo.push_back(std::move(pWildcat));
    pZoo.push_back(std::move(pFox));

    causeARiotAtTheZoo(std::move(pZoo));

    //pWildcat->makeSound();
    // Wildcat wildcat;
    //
    // wildcat.makeSound();


    return 0;
}



//
// Created by Work on 9/23/2026.
//

#ifndef INC_1437_ANIMAL_H
#define INC_1437_ANIMAL_H
#include <string>

class Lungs
{
    double volume = 0.0;
public:
    Lungs() = default; //what does this do? it initializes volume to 0 (if not already set to 0)
    Lungs(double volume); //declaration
};

class Thumbs
{
    double width = 0.0;

public:
    Thumbs() = default;
    Thumbs(double width);
};

class Tail
{
    bool isBushy = false;
};


class Animal
{
public:
    int age = 0;
    std::string speciesName;

    Animal();
    Animal(int age, const std::string& speciesName);

};

class Human : public Animal //you can read this line as: A human is a type of Animal (humans "inherit from" Animal)
{
    Lungs lungs;
    Thumbs thumbs;
    // virtual //can be overridden

public:
    Human(int age, const std::string& speciesName, double lungVolume, double thumbWidth);
    void print() const;
};

class Dog
{
    Lungs lungs; //composition (a dog "has (at least one) lung)
    Tail tail;
};



#endif //INC_1437_ANIMAL_H

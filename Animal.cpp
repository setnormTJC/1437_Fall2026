//
// Created by Work on 9/23/2026.
//

#include "Animal.h"

Animal::Animal() = default;

Animal::Animal(int age, const std::string &speciesName)
    :
age(age),
speciesName(speciesName)
{
}

Human::Human(int age, const std::string &speciesName, double lungVolume, double thumbWidth)
    :
Animal(age, speciesName),
lungs(lungVolume),
thumbs(thumbWidth)
{
}


Lungs::Lungs(double volume)
    :
volume(volume)
{

}

Thumbs::Thumbs(double width)
    :
width(width)
{

}

//
// Created by Work on 10/26/2026.
//

#include "Shape.h"

#include <iostream>

Shape::Shape() = default;

void Triangle::draw()
{
    std::cout << "Drawing a triangle" << std::endl;
}

Triangle::Triangle() = default;

void Square::draw()
{
    std::cout << "Drawing a square" << std::endl;
}

Square::Square() = default;

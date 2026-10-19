//
// Created by Work on 10/7/2026.
//

#include "Box.h"

Rectangle::Rectangle(int length, int width)
    :
length(length),
width(width)
{
    //insert validity checks (ex: if length < 0, throw error)
}

Box::Box(int length, int width, int height)
    :
Rectangle(length, width),
height(height)
{

}



// Box::Box(Rectangle* rectangle, int height)
// :
// height(height)
// {
// }

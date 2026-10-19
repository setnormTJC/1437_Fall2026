//
// Created by Work on 10/7/2026.
//

#ifndef INC_1437_FALL2026_BOX_H
#define INC_1437_FALL2026_BOX_H


class Rectangle
{
    int length;
    int width;

public:
    Rectangle(int length, int width);
    //void printThis() {cout << this}
};

class Box : public Rectangle
{
    int height;

public:
    Box(int length, int width, int height);

    // Box(Rectangle* rectangle, int height);

    // Box buildBoxBasedOnRectangle(const Rectangle& rectangle);

    // bool operator = ();
};


#endif //INC_1437_FALL2026_BOX_H

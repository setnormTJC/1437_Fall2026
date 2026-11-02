//
// Created by Work on 10/26/2026.
//

#ifndef INC_1437_FALL2026_SHAPE_H
#define INC_1437_FALL2026_SHAPE_H


class Shape
{
    // vector<Vec3> points;
    //no member vars cause Chase don't want 'em
public:
    virtual void draw() = 0;

    Shape();
};

class Triangle : public Shape
{
public:
    void draw() override;

    Triangle();
};

class Square : public Shape
{
public:
    void draw() override;

    Square();
};



#endif //INC_1437_FALL2026_SHAPE_H

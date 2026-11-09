//
// Created by Work on 11/9/2026.
//

#include "Matrix.h"

// Matrix::Matrix(int x11, int x12, int x21, int x22)
// {
//
// }
Matrix::Matrix(int x11, int x12, int x21, int x22)
    : //member initializer list syntax
x11(x11), x12(x12), x21(x21), x22(x22)
{
    // if x11 < 0 problem
    //empty... odd
}

Matrix Matrix::operator+(Matrix rhsMatrix)
{
    Matrix sum;

    sum.x11 = this->x11 + rhsMatrix.x11;
    //add the other 3 lines...


    return sum;
}

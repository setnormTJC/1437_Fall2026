//
// Created by Work on 11/9/2026.
//

#ifndef INC_1437_FALL2026_MATRIX_H
#define INC_1437_FALL2026_MATRIX_H

#include<vector>

class Matrix
{
    // std::vector<std::vector<int>> =
    // {
    //     {1, 2},
    //     {3, 4}
    // };

    int x11 = 0; //first row, first column
    int x12 = 0; //first row, second column
    int x21 = 0; //second row, first column
    int x22 = 0;

public:
    Matrix() = default;
    Matrix(int x11, int x12, int x21, int x22); //function declaration

    Matrix operator + (Matrix rhsMatrix);


};


#endif //INC_1437_FALL2026_MATRIX_H

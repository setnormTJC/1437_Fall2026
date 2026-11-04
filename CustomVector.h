//
// Created by Work on 11/2/2026.
//

#ifndef INC_1437_FALL2026_CUSTOMVECTOR_H
#define INC_1437_FALL2026_CUSTOMVECTOR_H
#include <vector>


// template<typename T>
class CustomVector
{
private:
    std::vector<int> nums;

public:
    CustomVector();

    CustomVector(const std::vector<int>& nums);

    CustomVector operator+ (const CustomVector& otherVector);

    bool operator == (const CustomVector& rhs);
};


#endif //INC_1437_FALL2026_CUSTOMVECTOR_H

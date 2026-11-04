//
// Created by Work on 11/2/2026.
//

#include "CustomVector.h"

CustomVector::CustomVector() = default; //default makes nums empty
CustomVector::CustomVector(const std::vector<int> &nums)
    : nums(nums)
{
}

CustomVector CustomVector::operator+(const CustomVector &otherVector)
{
    CustomVector concatenatedResult;

    for (int i = 0; i < this->nums.size(); ++i)
    {
        int currentNumberInThisArray = this->nums[i];

        concatenatedResult.nums.push_back(currentNumberInThisArray);
    }

    for (int i = 0; i < otherVector.nums.size(); ++i)
    {
        int currentNumberInOtherArray = otherVector.nums[i];

        concatenatedResult.nums.push_back(currentNumberInOtherArray);
    }

    return concatenatedResult;
}

bool CustomVector::operator==(const CustomVector &rhs)
{

    if (this->nums.size() != rhs.nums.size())
    {
        return false;
    }//"best case" scenario: O(1) -> time complexity

    for (int i = 0; i < this->nums.size(); ++i) //"average case" -> O(N) linear time complexity
    {
        if (this->nums[i] != rhs.nums.size())
        {
            return false;
        }
    }

    return true;

}

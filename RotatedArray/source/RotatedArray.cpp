#include "RotatedArray.h"

RotatedArray::RotatedArray()
{
}

RotatedArray::RotatedArray(vector<int> numbers, int target)
{
    this->numbers = numbers;
    this->target = target;
}

bool RotatedArray::searchTarget()
{
    int l = 0, r = numbers.size() - 1;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (numbers[mid] == target)
            return true;

        if (numbers[mid] < numbers[r])
        {
            if (target > numbers[mid] && target < numbers[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
        else if (numbers[mid] == numbers[l])
        {
            ++l;
        }
        else
        {
            if (target < numbers[mid] && target > numbers[l])
                r = mid - 1;
            else
                l = mid + 1;
        }
    }

    return false;
}

RotatedArray::~RotatedArray()
{
}
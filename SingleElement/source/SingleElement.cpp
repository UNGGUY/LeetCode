#include "SingleElement.h"

SingleElement::SingleElement()
{
}

SingleElement::SingleElement(vector<int> nums)
{
    this->nums = nums;
}

int SingleElement::findSingleElement()
{
    int l = 0, r = nums.size() - 1, mid = 0;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (mid % 2 == 1)
            --mid;
        if (nums[mid] != nums[mid + 1])
        {
            r = mid;
        }
        else
            l = mid + 2;
    }
    return nums[l];
}

SingleElement::~SingleElement()
{
}

#include "SearchRange.h"

int SearchRange::lower_bound(vector<int> &nums, int target)
{
    int l = 0, r = nums.size(), mid = 0;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (nums[mid] >= target)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}

int SearchRange::upper_bound(vector<int> &nums, int target)
{
    int l = 0, r = nums.size(), mid = 0;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (nums[mid] > target)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}

SearchRange::SearchRange()
{
}

SearchRange::SearchRange(vector<int> numbers, int target)
{
    this->numbers = numbers;
    this->target = target;
}

vector<int> SearchRange::findPosition()
{
    bool flag = false;
    int r = -1, l = -1, i = 0;
    for (auto item : numbers)
    {
        if (!flag && item == target)
        {
            l = i;
            flag = true;
        }
        else if (flag && item == target)
        {
            r = i;
        }
        ++i;
    }
    return vector<int>{l, r};
}

vector<int> SearchRange::findPositionV2()
{
    if (numbers.size() == 0)
        return vector<int>{-1, -1};
    int lower = this->lower_bound(numbers, target);
    int upper = this->upper_bound(numbers, target) - 1;
    if (lower == numbers.size() || numbers[lower] != target)
        return vector<int>{-1, -1};

    return vector<int>{lower, upper};
}

SearchRange::~SearchRange()
{
}

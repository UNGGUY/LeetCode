#include "SearchRange.h"

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

SearchRange::~SearchRange()
{
}

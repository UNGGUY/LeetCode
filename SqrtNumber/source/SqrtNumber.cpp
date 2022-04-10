#include "SqrtNumber.h"

SqrtNumber::SqrtNumber()
{
}

SqrtNumber::SqrtNumber(int base)
{
    this->base = base;
}

int SqrtNumber::findNumber()
{
    if (base == 0)
        return 0;
    else
    {
        int l = 1, r = base;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (mid * mid <= base)
                return mid;
            else
                r = mid;
        }
    }
    return -1;
}

SqrtNumber::~SqrtNumber()
{
}
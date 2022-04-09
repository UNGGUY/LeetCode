#include "ValidPalindrome.h"

ValidPalindrome::ValidPalindrome()
{
}

ValidPalindrome::ValidPalindrome(string str)
{
    this->str = str;
}

int ValidPalindrome::getPoint()
{
    return point;
}

bool ValidPalindrome::detectValidPalindrome()
{
    int l = 0, r = str.size() - 1;
    while (l <= r)
    {
        if (str[l] == str[r])
        {
            ++l;
            --r;
        }
        else if (str[l + 1] == str[r])
        {
            point = l;
            ++l;
        }
        else if (str[l] == str[r - 1])
        {
            point = r;
            --r;
        }
        else
            return false;
    }
    return true;
}

ValidPalindrome::~ValidPalindrome()
{
}
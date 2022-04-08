#include "SquareNumber.h" 

SquareNumber::SquareNumber()
{
}

SquareNumber::SquareNumber(int target)
{
    this->target=target;
}

vector<int> SquareNumber::sumSquareNumber()
{
    vector<int> numbers;
    int maxNumber=(int)sqrt((double)target);
    for (size_t i = 1; i <= maxNumber; ++i)
    {
        numbers.push_back(i);
    }


    int l=0,r=numbers.size()-1,sum=0;
    while (l<r)
    {
        sum=square(numbers[l])+square(numbers[r]);
        if(sum==target)
            return vector<int>{l+1,r+1};
        if(sum<target)
            ++l;
        else
            --r;
    }
    
    return vector<int>{-1,-1};
}

int SquareNumber::square(int base)
{
    return base*base;
}

SquareNumber::~SquareNumber()
{
}

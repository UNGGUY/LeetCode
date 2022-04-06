#include "TwoSum.h"


TwoSum::TwoSum()
{
}

TwoSum::TwoSum(vector<int> numbers,int target)
{
    this->numbers=numbers;
    this->target=target;
}

vector<int> TwoSum::getNumbers()
{
    return this->numbers;
}

void TwoSum::setNumbers(vector<int> numbers)
{
    this->numbers=numbers;
}

int TwoSum::getTarget()
{
    return target;
}

void TwoSum::setTarget(int target)
{
    this->target=target;
}

vector<int> TwoSum::searchNumbers()
{
    int l=0,r=numbers.size()-1,sum=0;
    while (l<r)
    {
        if(numbers[l]+numbers[r]==target)
        {
            return vector<int>{l+1,r+1};
        }
            
        if(numbers[l]+numbers[r]<target)
            l++;
        else
            r--;
    }
    return vector<int>{-1,-1};    
}

TwoSum::~TwoSum()
{
}
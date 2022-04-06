#pragma once
#include <iostream>
#include <vector>

using namespace std;

class TwoSum
{
private:
    vector<int> numbers;
    int target;
public:
    TwoSum();
    TwoSum(vector<int> numbers,int Target);
    vector<int> getNumbers();
    void setNumbers(vector<int> numbers);
    int getTarget();
    void setTarget(int Target);
    vector<int> searchNumbers();
    ~TwoSum();
};



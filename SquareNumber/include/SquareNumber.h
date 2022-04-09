#pragma once
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class SquareNumber
{
private:
    int target;

public:
    SquareNumber();
    SquareNumber(int target);
    int square(int base);
    vector<int> sumSquareNumber();
    ~SquareNumber();
};
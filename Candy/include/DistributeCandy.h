#pragma once
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

class DistributeCandy
{
private:
    vector<int> children;
public:
    DistributeCandy();
    DistributeCandy(vector<int> children);
    int minDistributeCandy();
    ~DistributeCandy();
};


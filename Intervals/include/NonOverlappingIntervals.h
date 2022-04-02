#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class NonOverlappingIntervals
{
private:
    vector<vector<int> > intervals;
public:
    NonOverlappingIntervals();
    NonOverlappingIntervals(vector<vector<int> > intervals);
    int eraseOverlapIntervals();
    ~NonOverlappingIntervals();
};



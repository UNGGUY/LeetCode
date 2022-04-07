#pragma once
#include <iostream>
#include <vector>

using namespace std;

class MergeArray
{
private:
    vector<int> array1;
    vector<int> array2;
    int m;
    int n;
public:
    MergeArray();
    MergeArray(vector<int> array1,vector<int>array2,int m,int n);
    vector<int> merge();
    ~MergeArray();
};

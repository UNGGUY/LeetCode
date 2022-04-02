#pragma once
#include <iostream>
#include <vector>
using namespace std;


class contentChildren
{
private:
    vector<int> children;
    vector<int> cookies;
public:
    contentChildren();
    contentChildren(vector<int> children,vector<int> cookies);
    int findContentChildren();
    ~contentChildren();
};



#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class MinSubstring
{
private:
    string S;
    string T;
public:
    MinSubstring();
    MinSubstring(string S,string T);
    string minWindows();
    ~MinSubstring();
};



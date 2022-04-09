#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class LongestWord
{
private:
    vector<string> dictionary;
    string str;
public:
    LongestWord();
    LongestWord(vector<string> dictionary,string str);
    string findLongestWord();
    ~LongestWord();
};



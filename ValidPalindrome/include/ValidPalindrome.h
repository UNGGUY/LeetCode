#pragma once
#include <string>
#include <iostream>

using namespace std;

class ValidPalindrome
{
private:
    string str;
    int point = -1;

public:
    ValidPalindrome();
    ValidPalindrome(string str);
    int getPoint();
    bool detectValidPalindrome();
    ~ValidPalindrome();
};

#include <iostream>
#include <vector>
using namespace std; 

class RegularExpressionMatch
{
private:
    string s;
    string p;
public:
    RegularExpressionMatch();
    RegularExpressionMatch(string s,string p);
    bool isMatch();
    ~RegularExpressionMatch();
};



#include <iostream>
#include <vector>
#include "RegularExpressionMatch.h"
using namespace std;

int main()
{
    string s = "aab";
    string p = "c*a*b";
    RegularExpressionMatch regularExpressionMatch = RegularExpressionMatch(s, p);
    if (regularExpressionMatch.isMatch())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}
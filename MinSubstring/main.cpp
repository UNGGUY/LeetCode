#include <iostream>
#include "MinSubstring.h"

using namespace std;

int main()
{
    string S = "ADOBECODEBANC";
    string T = "ABC";

    MinSubstring minSubstring = MinSubstring(S, T);

    cout << minSubstring.minWindows() << endl;
}
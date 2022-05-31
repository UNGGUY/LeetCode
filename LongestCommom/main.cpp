#include <iostream>
#include "LongestCommom.h"

using namespace std;

int main()
{
    string str1 = "abcde";
    string str2 = "ace";
    LongestCommom longestCommom = LongestCommom(str1, str2);
    cout << longestCommom.findCommom() << endl;
    return 0;
}
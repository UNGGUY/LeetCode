#include <iostream>
#include "LongestWord.h"

using namespace std;

int main()
{
    string str = "abpcplea";
    vector<string> dictionary{"ale", "apple", "monkey", "plea"};

    LongestWord longestWord = LongestWord(dictionary,str);

    cout << longestWord.findLongestWord() << endl;

    return 0;
}
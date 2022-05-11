#include <iostream>
#include <vector>
#include "WordBreak.h"

using namespace std;

int main()
{
    string str = "applepenapple";
    vector<string> dict{"apple", "pen"};
    WordBreak wordBreak = WordBreak(str, dict);
    if (wordBreak.breakWord())
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
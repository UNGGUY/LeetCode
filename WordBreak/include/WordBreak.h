#include <iostream>
#include <vector>

using namespace std;

class WordBreak
{
private:
    vector<string> dict;
    string str;

public:
    WordBreak();
    WordBreak(string str, vector<string> dict);
    bool breakWord();
    ~WordBreak();
};

#include "WordBreak.h"

WordBreak::WordBreak()
{
}

WordBreak::WordBreak(string str, vector<string> dict)
{
    this->str = str;
    this->dict = dict;
}

bool WordBreak::breakWord()
{
    int m = str.length();
    vector<bool> dp(m + 1, false);
    dp[0] = true;
    for (size_t i = 1; i <= m; i++)
    {
        for (auto word : dict)
        {
            int len = word.length();
            if (i >= len && str.substr(i - len, len) == word)
            {
                dp[i] = dp[i] || dp[i - len];
            }
        }
    }
    return dp[m];
}

WordBreak::~WordBreak()
{
}
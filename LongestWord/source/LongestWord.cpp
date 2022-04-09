#include "LongestWord.h"

LongestWord::LongestWord()
{
}

LongestWord::LongestWord(vector<string> dictionary, string str)
{
    this->dictionary = dictionary;
    this->str = str;
}

string LongestWord::findLongestWord()
{
    sort(str.begin(), str.end());
    string result;
    for (auto item : dictionary)
    {
        int i = 0, j = 0;
        string s = item;
        sort(item.begin(), item.end());
        while (i < str.size() && j < item.size())
        {
            if (str[i] == item[j])
            {
                ++i;
                ++j;
            }
            else
                ++i;
        }
        if (j == item.size() && result.size() < j)
        {
            result = s;
        }
    }
    return result;
}

LongestWord::~LongestWord()
{
}
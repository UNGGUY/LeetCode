#include "MinSubstring.h"

MinSubstring::MinSubstring()
{
}

MinSubstring::MinSubstring(string S, string T)
{
    this->S = S;
    this->T = T;
}

string MinSubstring::minWindows()
{
    vector<int> chars(128, 0);
    vector<bool> flag(128, false);

    for (int i = 0; i < T.size(); ++i)
    {
        flag[T[i]] = true;
        ++chars[T[i]];
    }

    int l = 0, cnt = 0, min_l = 0, min_size = S.size() + 1;

    for (int r = 0; r < S.size(); ++r)
    {
        if (flag[S[r]])
        {
            if (--chars[S[r]] >= 0)
            {
                ++cnt;
            }

            while (cnt == T.size())
            {
                if (r - l + 1 < min_size)
                {
                    min_l = l;
                    min_size = r - l + 1;
                }

                if (flag[S[l]] && ++chars[S[l]] > 0)
                {
                    --cnt;
                }
                ++l;
            }
        }
    }
    return min_size > S.size() ? "" : S.substr(min_l, min_size);
}

MinSubstring::~MinSubstring()
{
}
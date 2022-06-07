#include "MaxForm.h"

MaxForm::MaxForm()
{
}

MaxForm::MaxForm(vector<string> array, int m, int n)
{
    this->array = array;
    this->m = m;
    this->n = n;
}

int MaxForm::findMaxForm()
{
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (const string &str : array)
    {
        auto [count0, count1] = count(str);
        for (int i = m; i >= count0; --i)
        {
            for (int j = n; j >= count1; --j)
            {
                dp[i][j] = max(dp[i][j], 1 + dp[i - count0][j - count1]);
            }
        }
    }
    return dp[m][n];
}

pair<int, int> MaxForm::count(const string &str)
{
    int count0 = str.length(), count1 = 0;
    for (auto &c : str)
    {
        if (c == '1')
        {
            count1++;
            count0--;
        }
    }
    return make_pair(count0, count1);
}

MaxForm::~MaxForm()
{
}
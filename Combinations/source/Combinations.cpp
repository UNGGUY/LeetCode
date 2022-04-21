#include "Combinations.h"

Combinations::Combinations()
{
}

Combinations::Combinations(int n, int k)
{
    this->n = n;
    this->k = k;
}

void Combinations::_combine(int r, vector<int> &com, vector<vector<int>> &ans)
{
    if (com.size() == k)
    {
        ans.push_back(com);
        return;
    }
    for (size_t i = r; i <= n; i++)
    {
        com.push_back(i);
        _combine(i + 1, com, ans);
        com.pop_back();
    }
}

vector<vector<int>> Combinations::combine()
{
    vector<vector<int>> ans;
    vector<int> com;
    _combine(1,com,ans);
    return ans;
}

Combinations::~Combinations()
{
}
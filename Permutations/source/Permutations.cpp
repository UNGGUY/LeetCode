#include "Permutations.h"

Permutations::Permutations()
{
}

Permutations::Permutations(vector<int> nums)
{
    this->nums = nums;
}

vector<vector<int>> Permutations::findPermute()
{
    vector<vector<int>> ans;

    _findPermute(0, ans);

    return ans;
}

void Permutations::_findPermute(int r, vector<vector<int>> &ans)
{
    if (r == nums.size() - 1)
    {
        ans.push_back(nums);
        return;
    }
    for (size_t i = r; i < nums.size(); i++)
    {
        swap(nums[i], nums[r]);
        _findPermute(r + 1, ans);
        swap(nums[i], nums[r]);
    }
}

Permutations::~Permutations()
{
}
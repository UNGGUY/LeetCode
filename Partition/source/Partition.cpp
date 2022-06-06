#include "Partition.h"

Partition::Partition()
{
}

Partition::Partition(vector<int> num)
{
    this->num = num;
}

bool Partition::canPartition()
{
    int sum = accumulate(num.begin(), num.end(), 0);
    if (sum % 2)
    {
        return false;
    }
    int target = sum / 2, n = num.size();
    vector<bool> dp(target + 1, false);
    dp[0] = true;
    for (size_t i = 1; i < n; i++)
    {
        for (size_t j = target; j >= num[i - 1]; --j)
        {
            dp[j] = dp[j] || dp[j - num[i - 1]];
        }
    }

    return dp[target];
}

Partition::~Partition()
{
}
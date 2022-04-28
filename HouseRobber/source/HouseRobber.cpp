#include "HouseRobber.h"

HouseRobber::HouseRobber()
{
}

HouseRobber::HouseRobber(vector<int> nums)
{
    this->nums = nums;
}

int HouseRobber::maxMoney()
{
    if (nums.empty())
    {
        return 0;
    }
    int n = nums.size();
    vector<int> dp(n + 1, 0);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (size_t i = 2; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], nums[i] + dp[i]);
    }

    return dp[n];
}

HouseRobber::~HouseRobber()
{
}

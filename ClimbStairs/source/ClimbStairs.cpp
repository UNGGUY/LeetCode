#include "ClimbStairs.h"

ClimbStairs::ClimbStairs()
{
}

ClimbStairs::ClimbStairs(int n)
{
    this->n = n;
}

int ClimbStairs::climbNum()
{
    if (n < 2)
    {
        return n;
    }

    vector<int> dp(n + 1, 1);

    for (size_t i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

ClimbStairs::~ClimbStairs()
{
}
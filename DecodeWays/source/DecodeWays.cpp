#include "DecodeWays.h"

DecodeWays::DecodeWays()
{
}

DecodeWays::DecodeWays(string nums)
{
    this->nums = nums;
}

int DecodeWays::findDecode()
{
    int m = nums.size();
    if (m == 0)
        return 0;
    int prev = nums[0] - '0';
    if (prev == 0)
        return 0;
    if (m == 1)
    {
        return 1;
    }

    vector<int> dp(m + 1, 1);
    for (size_t i = 2; i <= m; i++)
    {
        int cur = nums[i - 1] - '0';
        if ((prev == 0 || prev > 2) && cur == 0)
        {
            return 0;
        }

        if (prev == 1 || (prev == 2 && cur < 7))
        {
            if (cur)
            {
                dp[i] = dp[i - 1] + dp[i - 2];
            }
            else
            {
                dp[i] = dp[i - 2];
            }
        }
        else
        {
            dp[i] = dp[i - 1];
        }

        prev = cur;
    }

    return dp[m];
}

DecodeWays::~DecodeWays()
{
}
#include "ArithmeticSlices.h"

ArithmeticSlices::ArithmeticSlices()
{
}

ArithmeticSlices::ArithmeticSlices(vector<int> nums)
{
    this->nums = nums;
}

int ArithmeticSlices::findSlices()
{
    if (nums.size() < 3)
    {
        return 0;
    }
    vector<int> dp(nums.size(), 0);
    for (size_t i = 2; i < nums.size(); i++)
    {
        if ((nums[i] - nums[i - 1]) == (nums[i - 1] - nums[i - 2]))
        {
            dp[i] = dp[i - 1] + 1;
        }
    }
    return accumulate(dp.begin(),dp.end(),0);
}

ArithmeticSlices::~ArithmeticSlices()
{
}
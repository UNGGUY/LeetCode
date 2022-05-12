#include "LongestSubsequence.h"

LongestSubsequence::LongestSubsequence()
{
}

LongestSubsequence::LongestSubsequence(vector<int> nums)
{
    this->nums = nums;
}

int LongestSubsequence::findLongestSubsequence()
{
    int m = nums.size();
    int max_length = 0;
    vector<int> dp(m, 1);
    for (size_t i = 0; i < m; i++)
    {

        for (size_t j = 0; j < i; j++)
        {
            if(nums[i]>nums[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        max_length = max(max_length, dp[i]);
    }
    return max_length;
}

LongestSubsequence::~LongestSubsequence()
{
}
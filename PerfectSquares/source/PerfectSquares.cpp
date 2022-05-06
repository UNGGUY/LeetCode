#include "PerfectSquares.h"

PerfectSquares::PerfectSquares()
{
}

PerfectSquares::PerfectSquares(int num)
{
    this->num = num;
}

int PerfectSquares::squaresCollection()
{
    vector<int> dp(256, 0);

    for (size_t i = 1; i <= num; i++)
    {
        int perNum = 256;
        for (size_t j = 1; j * j <= i; j++)
        {
            perNum = min(perNum, dp[i - j * j]);
        }
        dp[i] = perNum + 1;
    }

    return dp[num];
}

PerfectSquares::~PerfectSquares()
{
}
#include "CoinChange.h"

CoinChange::CoinChange()
{
}

CoinChange::CoinChange(vector<int> coins,int amount)
{
    this->coins=coins;
    this->amount=amount;
}

int CoinChange::coinChange()
{
    if (coins.empty())
        return -1;

    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    for (int i = 1; i <= amount; ++i)
    {
        for (auto item : coins)
        {
            if (i >= item)
            {
                dp[i] = min(dp[i], dp[i - item] + 1);
            }
        }
    }
    return dp[amount] == amount + 1 ? -1 : dp[amount];
}

CoinChange::~CoinChange()
{
}

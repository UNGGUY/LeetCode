#include "MaxProfit.h"

MaxProfit::MaxProfit()
{
}

MaxProfit::MaxProfit(vector<int> prices, int k)
{
    this->prices = prices;
    this->k = k;
}

int MaxProfit::profit()
{
    int days = prices.size();
    if (days < 2)
    {
        return 0;
    }
    if (k * 2 >= days)
    {
        return maxProfitUnlimited();
    }
    vector<int> buy(k + 1, INT_MIN), sell(k + 1, 0);
    for (int i = 0; i < days; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            buy[j] = max(buy[j], sell[j - 1] - prices[i]);
            sell[j] = max(sell[j], buy[j] + prices[i]);
        }
    }
    return sell[k];
}

int MaxProfit::maxProfitUnlimited()
{
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); ++i)
    {
        if (prices[i] > prices[i - 1])
        {
            maxProfit += prices[i] - prices[i - 1];
        }
    }
    return maxProfit;
}

MaxProfit::~MaxProfit()
{
}
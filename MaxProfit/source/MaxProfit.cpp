#include "MaxProfit.h"

MaxProfit::MaxProfit()
{
}

MaxProfit::MaxProfit(vector<int> prices)
{
    this->prices = prices;
}

MaxProfit::~MaxProfit()
{
}

int MaxProfit::maxProfit()
{
    int sell = 0, buy = INT_MIN;
    for (int i = 0; i < prices.size(); ++i)
    {
        buy = max(buy, -prices[i]);
        sell = max(sell, buy + prices[i]);
    }
    return sell;
}
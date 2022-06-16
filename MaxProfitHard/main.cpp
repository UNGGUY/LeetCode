#include <iostream>
#include <vector>
#include "MaxProfit.h"

using namespace std;

int main()
{
    vector<int> prices = {3, 2, 6, 5, 0, 3};
    int k = 2;
    MaxProfit maxProfit = MaxProfit(prices, k);
    cout << maxProfit.profit() << endl;
    return 0;
}
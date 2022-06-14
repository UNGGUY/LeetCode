#include <iostream>
#include <vector>
#include "MaxProfit.h"

using namespace std;

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    MaxProfit maxProfit = MaxProfit(prices);
    cout << maxProfit.maxProfit() << endl;
    return 0;
}
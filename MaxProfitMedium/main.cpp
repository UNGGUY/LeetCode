#include <iostream>
#include <vector>
#include "MaxProfit.h"
using namespace std;

int main()
{
    vector<int> prices = {1, 2, 3, 0, 2};
    MaxProfit profit = MaxProfit(prices);
    cout << profit.maxProfit() << endl;
    return 0;
}
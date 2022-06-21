#include <iostream>
#include <vector>

using namespace std;

class MaxProfit
{
private:
    vector<int> prices;
public:
    MaxProfit();
    MaxProfit(vector<int> prices);
    int maxProfit();
    ~MaxProfit();
};



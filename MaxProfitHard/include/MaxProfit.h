#include <iostream>
#include <vector>

using namespace std;

class MaxProfit
{
private:
    vector<int> prices;
    int k;
    int maxProfitUnlimited();  
public:
    MaxProfit();
    MaxProfit(vector<int> prices,int k);
    int profit();
    ~MaxProfit();
};



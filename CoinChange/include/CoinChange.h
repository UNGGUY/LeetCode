#include <iostream>
#include <vector>

using namespace std;

class CoinChange
{
private:
    vector<int> coins;
    int amount;
public:
    CoinChange();
    CoinChange(vector<int> coins,int amount);
    int coinChange();
    ~CoinChange();
};



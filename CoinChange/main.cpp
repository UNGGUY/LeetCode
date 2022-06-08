#include <iostream>
#include <vector>
#include "CoinChange.h"
using namespace std;

int main()
{
    int amount = 11;
    vector<int> coins{1, 3, 5};
    CoinChange coinChange = CoinChange(coins, amount);
    cout << coinChange.coinChange() << endl;
}
#include <iostream>
#include <vector>
#include "HouseRobber.h"

using namespace std;

int main()
{
    vector<int> nums{2, 7, 9, 3, 1};
    HouseRobber houseRobber = HouseRobber(nums);
    cout << houseRobber.maxMoney() << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class HouseRobber
{
private:
    vector<int> nums;
public:
    HouseRobber();
    HouseRobber(vector<int> nums);
    int maxMoney();
    ~HouseRobber();
};

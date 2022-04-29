#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

class ArithmeticSlices
{
private:
    vector<int> nums;

public:
    ArithmeticSlices();
    ArithmeticSlices(vector<int> nums);
    int findSlices();
    ~ArithmeticSlices();
};

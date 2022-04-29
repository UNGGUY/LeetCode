#include <iostream>
#include <vector>
#include "ArithmeticSlices.h"

using namespace std;

int main()
{
    vector<int> nums{1, 2, 3, 4};
    ArithmeticSlices arithmeticSlices = ArithmeticSlices(nums);
    cout << arithmeticSlices.findSlices() << endl;
    return 0;
}
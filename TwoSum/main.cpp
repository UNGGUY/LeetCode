#include <iostream>
#include "TwoSum.h"
using namespace std;


int main()
{
    vector<int> numbers{2,7,11,15};
    int target=14;
    TwoSum twoSum=TwoSum(numbers,target);
    vector<int> result=twoSum.searchNumbers();
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
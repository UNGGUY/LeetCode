#include <iostream>
#include <vector>
#include "LongestSubsequence.h"
using namespace std;

int main()
{
    vector<int> nums{10, 9, 2, 5, 3, 7, 101, 4};
    LongestSubsequence longestSubsequence = LongestSubsequence(nums);
    cout << longestSubsequence.findLongestSubsequence() << endl;
    return 0;
}
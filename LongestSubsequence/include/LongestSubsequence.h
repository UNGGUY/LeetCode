#include <iostream>
#include <vector>

using namespace std;

class LongestSubsequence
{
private:
    vector<int> nums;
public:
    LongestSubsequence();
    LongestSubsequence(vector<int> nums);
    int findLongestSubsequence();
    ~LongestSubsequence();
};



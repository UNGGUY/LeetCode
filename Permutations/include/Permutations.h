#include <iostream>
#include <vector>

using namespace std;

class Permutations
{
private:
    vector<int> nums;
    void _findPermute(int r, vector<vector<int>> &ans);

public:
    Permutations();
    Permutations(vector<int> nums);
    vector<vector<int>> findPermute();
    ~Permutations();
};

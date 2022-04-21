#include <iostream>
#include <vector>

using namespace std;

class Combinations
{
private:
    int n;
    int k;
    void _combine(int r,vector<int> &com,vector<vector<int>> &ans);
public:
    Combinations();
    Combinations(int n,int k);
    vector<vector<int>> combine();
    ~Combinations();
};



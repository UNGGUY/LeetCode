#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class MaxIsland
{
private:
    vector<int> direction{-1, 0, 1, 0, -1};
    vector<vector<int>> grid;
public:
    MaxIsland();
    MaxIsland(vector<vector<int>>grid);
    int findMaxIsland();
    int findMaxIslandRe();
    int _findMaxIslandRe(int r,int c);
    ~MaxIsland();
};

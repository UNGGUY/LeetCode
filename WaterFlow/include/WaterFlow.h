#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

class WaterFlow
{
private:
    vector<vector<int>> chorography;
    vector<int> direction{-1, 0, 1, 0, -1};
    void _findPointRe(int r,int c,vector<vector<bool>> &can_reach);
public:
    WaterFlow();
    WaterFlow(vector<vector<int>> chorography);
    vector<vector<int>> findPoint();
    vector<vector<int>> findPointRe();
    ~WaterFlow();
};

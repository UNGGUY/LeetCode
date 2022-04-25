#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class ShortestBridge
{
private:
    vector<vector<int>> area;
    vector<int> direction{-1, 0, 1, 0, -1};
    void _findIsland(int r, int c, queue<pair<int, int>> &points);
    int _findBridge(queue<pair<int, int>> &points);

public:
    ShortestBridge();
    ShortestBridge(vector<vector<int>> area);
    int findBridge();
    ~ShortestBridge();
};

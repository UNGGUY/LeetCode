#include <iostream>
#include <vector>

using namespace std;

class MinimumPath
{
private:
    vector<vector<int>> grid;
public:
    MinimumPath();
    MinimumPath(vector<vector<int>> grid);
    int findMinPath();
    ~MinimumPath();
};



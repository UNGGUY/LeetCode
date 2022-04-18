#include <iostream>
#include <vector>
#include "MaxIsland.h"
using namespace std;

int main()
{
    vector<vector<int>> grid{{1, 0, 1, 1, 0, 1, 0, 1},
                             {1, 0, 1, 1, 0, 1, 1, 1},
                             {0, 0, 0, 0, 0, 0, 0, 1}};
    //MaxIsland maxIsland = MaxIsland(grid);
    MaxIsland maxIslandRe=MaxIsland(grid);
    //cout << maxIsland.findMaxIsland() << endl;
    cout << maxIslandRe.findMaxIslandRe() << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include "MinimumPath.h"
using namespace std;

int main()
{
    vector<vector<int>> grid{
        {1, 3, 1},
        {1, 5, 1},
        {4, 2, 1}};

    MinimumPath minimumPath = MinimumPath(grid);
    cout << minimumPath.findMinPath() << endl;
    return 0;
}
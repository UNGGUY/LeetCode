#include <iostream>
#include <vector>
#include "ShortestBridge.h"

using namespace std;

int main()
{
    vector<vector<int>> area{{1, 1, 1, 1, 1},
                             {1, 0, 0, 0, 1},
                             {1, 0, 1, 0, 1},
                             {1, 0, 0, 0, 1},
                             {1, 1, 1, 1, 1}};
    ShortestBridge shortestBridge = ShortestBridge(area);
    cout << shortestBridge.findBridge() << endl;
    return 0;
}
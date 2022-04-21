#include <iostream>
#include <vector>
#include "Combinations.h"

using namespace std;

int main()
{
    Combinations combinations = Combinations(4, 3);
    vector<vector<int>> ans = combinations.combine();
    for (auto item : ans)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

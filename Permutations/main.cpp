#include <iostream>
#include <vector>
#include "Permutations.h"
using namespace std;

int main()
{
    vector<int> nums{1, 2, 3};
    vector<vector<int>> ans;
    Permutations permutations = Permutations(nums);
    ans = permutations.findPermute();
    for (auto item : ans)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
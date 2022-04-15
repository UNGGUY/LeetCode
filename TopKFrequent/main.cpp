#include <iostream>
#include <vector>
#include "TopKFrequent.h"
using namespace std;

int main()
{
    vector<int> nums{1, 1, 1, 1, 1, 2, 2, 3, 4, 5};
    int k = 2;
    TopKFrequent topKFrequent = TopKFrequent(nums, k);

    for (auto item : topKFrequent.findTopKNumbers())
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
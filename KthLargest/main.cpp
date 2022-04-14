#include <iostream>
#include <vector>
#include "KthLargest.h"
using namespace std;

int main()
{
    vector<int> nums{3, 2, 1, 5, 6, 4};
    int k = 2;

    KthLargest kthLargest = KthLargest(nums, k);

    cout << kthLargest.findKthLargest() << endl;

    return 0;
}
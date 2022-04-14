#include <iostream>
#include "MySort.h"

using namespace std;

int main()
{
    vector<int> nums {1,3,5,7,2,6,4,8,9,2,8,7,6,0,3,5,9,4,1,0};
    MySort mySort=MySort(nums);
    mySort.quick_sort();
    mySort.printNums();
    return 0;
}
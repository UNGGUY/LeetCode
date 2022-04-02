#include <iostream>
#include "NonOverlappingIntervals.h"
using namespace std;

int main()
{
    vector<vector<int> > intervals = {{1,2},{2,4},{1,3}};
    NonOverlappingIntervals nonOverlappingIntervals=NonOverlappingIntervals(intervals);
    cout << nonOverlappingIntervals.eraseOverlapIntervals() << endl;
    return 0;
}
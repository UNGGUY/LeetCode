#include "NonOverlappingIntervals.h"

NonOverlappingIntervals::NonOverlappingIntervals()
{
}

NonOverlappingIntervals::NonOverlappingIntervals(vector<vector<int> > intervals)
{
    this->intervals=intervals;
}

int NonOverlappingIntervals::eraseOverlapIntervals()
{
    if(intervals.empty())
        return 0;
    int n = intervals.size();
    sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    });

    int num=0;
    int pre=intervals[0][1];
    for(int i=1;i<n;i++)
    {
        if(intervals[i][0]<pre)
            num++;
        pre=intervals[i][1];
    }

    return num;
}

NonOverlappingIntervals::~NonOverlappingIntervals()
{
}
#include <iostream>
#include <MergeArray.h>
using namespace std;

int main()
{
    vector<int> array1={1,2,3,0,0,0};
    vector<int> array2={2,5,6};
    int m=3;
    int n=3;
    MergeArray mergeArray=MergeArray(array1,array2,m,n);

    vector<int> array=mergeArray.merge();

    for(auto item : array)
        cout << item << " ";
    
    cout << endl;

    return 0;
}
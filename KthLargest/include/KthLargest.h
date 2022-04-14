#include <iostream>
#include <vector>

using namespace std;

class KthLargest
{
private:
   vector<int> nums; 
   int k;
   int quickSelection(int l,int r);
public:
    KthLargest();
    KthLargest(vector<int> nums,int k);
    int findKthLargest();
    ~KthLargest();
};



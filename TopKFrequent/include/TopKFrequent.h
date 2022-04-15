#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class TopKFrequent
{
private:
    vector<int> nums;
    int k;
public:
    TopKFrequent();
    TopKFrequent(vector<int> nums,int k);
    vector<int> findTopKNumbers();
    ~TopKFrequent();
};



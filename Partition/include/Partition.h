#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Partition
{
private:
    vector<int> num;
public:
    Partition();
    Partition(vector<int> num);
    bool canPartition();
    ~Partition();
};



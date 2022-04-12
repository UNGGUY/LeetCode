#include <iostream>
#include <vector>

using namespace std;

class RotatedArray
{
private:
    vector<int> numbers;
    int target;
public:
    RotatedArray();
    RotatedArray(vector<int> numbers,int target);
    bool searchTarget();
    ~RotatedArray();
};


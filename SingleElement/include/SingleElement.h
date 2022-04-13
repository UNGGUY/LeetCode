#include <iostream>
#include <vector>

using namespace std;

class SingleElement
{
private:
    vector<int> nums;
    int target;
public:
    SingleElement();
    SingleElement(vector<int> nums);
    int findSingleElement();
    ~SingleElement();
};


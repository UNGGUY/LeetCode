#include <iostream>
#include <vector>

using namespace std;

class SearchRange
{
private:
    vector<int> numbers;
    int target;
    int lower_bound(vector<int> &nums,int target);
    int upper_bound(vector<int> &nums,int target);
public:
    SearchRange();
    SearchRange(vector<int> numbers, int target);
    vector<int> findPosition();
    vector<int> findPositionV2();
    ~SearchRange();
};

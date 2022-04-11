#include <iostream>
#include <vector>

using namespace std;

class SearchRange
{
private:
    vector<int> numbers;
    int target;

public:
    SearchRange();
    SearchRange(vector<int> numbers, int target);
    vector<int> findPosition();
    ~SearchRange();
};

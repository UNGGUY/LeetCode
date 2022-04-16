#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class SortFrequent
{
private:
    vector<char> chars;

public:
    SortFrequent();
    SortFrequent(vector<char> chars);
    vector<char> frequentSort();
    ~SortFrequent();
};

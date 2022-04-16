#include "SortFrequent.h"

SortFrequent::SortFrequent()
{
}

SortFrequent::SortFrequent(vector<char> chars)
{
    this->chars = chars;
}

vector<char> SortFrequent::frequentSort()
{
    unordered_map<int, int> counts;
    int max_count = 0;
    for (auto item : chars)
    {
        max_count = max(max_count, ++counts[item]);
    }

    vector<vector<int>> buckets(max_count + 1);

    for (auto item : counts)
    {
        buckets[item.second].push_back(item.first);
    }

    vector<char> ans;

    for (size_t i = max_count; i > 0; --i)
    {
        for (auto item : buckets[i])
        {
            for (size_t j = i; j > 0; --j)
            {
                ans.push_back(item);
            }
        }
    }

    return ans;
}

SortFrequent::~SortFrequent()
{
}
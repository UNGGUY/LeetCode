#include "TopKFrequent.h"

TopKFrequent::TopKFrequent()
{
}

TopKFrequent::TopKFrequent(vector<int> nums, int k)
{
    this->nums = nums;
    this->k = k;
}

vector<int> TopKFrequent::findTopKNumbers()
{
    unordered_map<int, int> counts;
    int max_count = 0;
    for (auto item : nums)
    {
        max_count = max(max_count, ++counts[item]);
    }

    vector<vector<int>> buckets(max_count + 1);
    for (auto item : counts)
    {
        buckets[item.second].push_back(item.first);
    }


    vector<int> ans;
    for (size_t i = max_count; i > 0 && ans.size() < k; --i)
    {
        for (auto item : buckets[i])
        {
            ans.push_back(item);
            if (ans.size() == k)
                break;
        }
    }

    return ans;
}

TopKFrequent::~TopKFrequent()
{
}
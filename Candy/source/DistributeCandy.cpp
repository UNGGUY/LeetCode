#include "DistributeCandy.h"

DistributeCandy::DistributeCandy()
{
}

DistributeCandy::DistributeCandy(vector<int> children)
{
    this->children = children;
}

int DistributeCandy::minDistributeCandy()
{
    int size = children.size();
    if (size < 2)
    {
        return size;
    }
    vector<int> num(size, 1);
    for (int i = 1; i < size; ++i)
    {
        if (children[i] > children[i - 1])
        {
            num[i] = num[i - 1] + 1;
        }
    }
    for (int i = size - 1; i > 0; --i)
    {
        if (children[i] < children[i - 1])
        {
            num[i - 1] = max(num[i - 1], num[i] + 1);
        }
    }
    // std::accumulate 可以很方便地求和
    return accumulate(num.begin(), num.end(), 0);

}

DistributeCandy::~DistributeCandy()
{
}

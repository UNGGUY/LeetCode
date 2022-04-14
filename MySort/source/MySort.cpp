#include "MySort.h"

MySort::MySort()
{
}

MySort::MySort(vector<int> nums)
{
    this->nums = nums;
    this->temp = vector<int>(nums.size());
}

void MySort::insertion_sort()
{
    for (size_t i = 0; i < nums.size(); ++i)
    {
        for (size_t j = i; j > 0 && nums[j] < nums[j - 1]; --j)
        {
            swap(nums[j], nums[j - 1]);
        }
    }
}

void MySort::bubble_sort()
{
    bool swapped;
    for (size_t i = 1; i < nums.size(); ++i)
    {
        for (size_t j = 1; j < nums.size() - i + 1; ++j)
        {
            if (nums[j] < nums[j - 1])
            {
                swap(nums[j], nums[j - 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void MySort::selection_sort()
{
    int mid;
    for (size_t i = 0; i < nums.size() - 1; ++i)
    {
        mid = i;
        for (size_t j = i + 1; j < nums.size(); ++j)
        {
            if (nums[j] < nums[mid])
            {
                mid = j;
            }
        }
        swap(nums[mid], nums[i]);
    }
}

void MySort::merge_sort()
{
    merge_sort(0, nums.size());
}

void MySort::merge_sort(int l, int r)
{
    if (l + 1 >= r)
        return;
    int m = l + (r - l) / 2;

    merge_sort(l, m);
    merge_sort(m, r);

    int p = l, q = m, i = l;
    while (p < m || q < r)
    {
        if (q > r || (p < m && nums[p] < nums[q]))
            temp[i++] = nums[p++];
        else
            temp[i++] = nums[q++];
    }
    for (i = l; i < r; ++i)
        nums[i] = temp[i];
}

void MySort::quick_sort()
{
    quick_sort(0, nums.size());
}

void MySort::quick_sort(int l, int r)
{
    if (l + 1 >= r)
        return;
    int first = l, last = r - 1, key = nums[first];
    while (first < last)
    {
        while (first < last && nums[last] >= key)
        {
            --last;
        }
        nums[first] = nums[last];
        while (first < last && nums[first] <= key)
        {
            ++first;
        }
        nums[last] = nums[first];
    }
    nums[first] = key;
    quick_sort(l, first);
    quick_sort(first + 1, r);
}

void MySort::printNums()
{
    for (auto item : nums)
        cout << item << " ";

    cout << endl;
    return;
}

MySort::~MySort()
{
}
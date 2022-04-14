#include <iostream>
#include <vector>

using namespace std;

class MySort
{
private:
    vector<int> nums;
    vector<int> temp;
public:
    MySort();
    MySort(vector<int> nums);
    void quick_sort();
    void quick_sort(int l,int r);
    void merge_sort();
    void merge_sort(int l,int r);
    void insertion_sort();
    void bubble_sort();
    void selection_sort(); 
    void printNums();
    ~MySort();
};



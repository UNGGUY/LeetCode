#include "MergeArray.h"



MergeArray::MergeArray()
{
}

MergeArray::MergeArray(vector<int> array1,vector<int> array2,int m,int n)
{
    this->array1=array1;
    this->array2=array2;
    this->m = m;
    this->n = n;
}

vector<int> MergeArray::merge()
{
    int pos=m-- + n-- -1;
    while(n>=0&&m>=0)
    {
        array1[pos--]=array1[m]>array2[n]?array1[m--]:array2[n--];
    }
    while(n>0)
    {
        array1[pos--]=array2[n--];
    }
    return array1;
}

MergeArray::~MergeArray()
{
}

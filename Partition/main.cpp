#include <iostream>
#include <vector>
#include "Partition.h"

using namespace std;

int main()
{
    vector<int> num = {1, 5, 11, 5};
    Partition partition = Partition(num);
    if (partition.canPartition())
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
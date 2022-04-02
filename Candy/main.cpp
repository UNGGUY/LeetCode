#include <iostream>
#include "DistributeCandy.h"
using namespace std;


int main()
{
    vector<int> children = {1,0,3,0,1,1};

    DistributeCandy distributeCandy=DistributeCandy(children);

    cout<< distributeCandy.minDistributeCandy() << endl;
    
    return 0;
}
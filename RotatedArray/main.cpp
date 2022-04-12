#include <iostream>
#include "RotatedArray.h"

using namespace std;

int main()
{
    vector<int> numbers{2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    RotatedArray rotatedArray = RotatedArray(numbers, target);
    if (rotatedArray.searchTarget())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
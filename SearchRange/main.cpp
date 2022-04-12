#include <iostream>
#include "SearchRange.h"

using namespace std;

int main()
{
    vector<int> numbers{5, 7, 7, 8, 8, 8, 10};
    int target = 8;
    SearchRange searchRange = SearchRange(numbers,target);
    vector<int> position = searchRange.findPositionV2();
    cout << position[0] << " " << position[1] << endl;
    return 0;
}
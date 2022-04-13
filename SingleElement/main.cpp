#include <iostream>
#include "SingleElement.h"

int main()
{
    vector<int> nums{1, 1, 2, 3, 3, 4, 4, 5, 5};
    SingleElement singleElement = SingleElement(nums);
    cout << singleElement.findSingleElement() << endl;
    return 0;
}
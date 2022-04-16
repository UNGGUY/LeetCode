#include <iostream>
#include <vector>
#include "SortFrequent.h"

using namespace std;

int main()
{
    vector<char> chars{'t', 'r', 'e', 'e'};
    SortFrequent sortFrequent = SortFrequent(chars);
    for (auto item : sortFrequent.frequentSort())
    {
        cout << item << " ";
    }

    cout << endl;
    return 0;
}
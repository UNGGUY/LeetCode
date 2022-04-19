#include <iostream>
#include <vector>
#include "WaterFlow.h"
using namespace std;

int main()
{
    vector<vector<int>> chorography{{1, 2, 2, 3, 5},
                                    {3, 2, 3, 4, 4},
                                    {2, 4, 5, 3, 1},
                                    {6, 7, 1, 4, 5},
                                    {5, 1, 1, 2, 4}};
    WaterFlow waterFlow = WaterFlow(chorography);
    vector<vector<int>> result = waterFlow.findPointRe();
    for (auto item : result)
        cout << item[0] << " " << item[1] << endl;
    return 0;
}
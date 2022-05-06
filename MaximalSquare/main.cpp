#include <iostream>
#include <vector>
#include "MaximalSquare.h"
using namespace std;

int main()
{
    vector<vector<int>> matrix{
        {1, 0, 1, 0, 0},
        {1, 0, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0}};

    MaximalSquare maximalSquare = MaximalSquare(matrix);
    cout << maximalSquare.findMaxSquare() << endl;
    return 0;
}
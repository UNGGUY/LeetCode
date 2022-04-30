#include <iostream>
#include <vector>
#include "ToZeroLenth.h"
using namespace std;

int main()
{
    vector<vector<int>> matrix{
        {0, 0, 0},
        {0, 1, 0},
        {1, 1, 1}};
    ToZeroLenth toZeroLenth = ToZeroLenth(matrix);
    matrix = toZeroLenth.updateMatrix();
    for (auto item : matrix)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
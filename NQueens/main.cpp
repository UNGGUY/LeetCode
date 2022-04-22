#include <iostream>
#include "NQueens.h"

using namespace std;

int main()
{
    int n = 4;
    NQueens nQueens = NQueens(n);
    for (auto item : nQueens.solveNQueens())
    {
        for (auto it : item)
            cout << it << endl;
        cout << endl;
    }
    return 0;
}
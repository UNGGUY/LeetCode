#include "NQueens.h"

NQueens::NQueens()
{
}

NQueens::NQueens(int n)
{
    this->n = n;
}

vector<vector<string>> NQueens::solveNQueens()
{
    vector<vector<string>> ans;
    vector<bool> column(n, false), ldiag(2 * n - 1, false), rdiag(2 * n - 1, false);
    vector<string> result(n, string(n, '.'));

    _solveNQueens(0, column, ldiag, rdiag, ans, result);

    return ans;
}

void NQueens::_solveNQueens(int row, vector<bool> &column, vector<bool> &ldiag, vector<bool> &rdiag, vector<vector<string>> &ans, vector<string> &result)
{
    if (row == n)
    {
        ans.push_back(result);
        return;
    }
    for (size_t i = 0; i < n; i++)
    {
        if (column[i] || rdiag[row + i] || ldiag[n - row + i - 1])
        {
            continue;
        }
        column[i] = rdiag[row + i] = ldiag[n - row + i - 1] = true;
        result[row][i] = 'Q';
        _solveNQueens(row + 1, column, ldiag, rdiag, ans, result);
        result[row][i] = '.';
        column[i] = rdiag[row + i] = ldiag[n - row + i - 1] = false;
    }
}

NQueens::~NQueens()
{
}
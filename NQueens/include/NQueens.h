#include <iostream>
#include <vector>

using namespace std;

class NQueens
{
private:
    int n;
    void _solveNQueens(int r, vector<bool> &column, vector<bool> &ldiag, vector<bool> &rdiag, vector<vector<string>> &ans, vector<string> &result);

public:
    NQueens();
    NQueens(int n);
    vector<vector<string>> solveNQueens();
    ~NQueens();
};

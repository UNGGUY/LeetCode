#include "MaximalSquare.h"

MaximalSquare::MaximalSquare()
{
}

MaximalSquare::MaximalSquare(vector<vector<int>> matrix)
{
    this->matrix = matrix;
}

int MaximalSquare::findMaxSquare()
{
    int m = matrix.size(), n = matrix[0].size(), max_size = 0;
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (size_t i = 1; i <= m; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
            if (matrix[i - 1][j - 1] == 1)
            {
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                max_size = max(max_size, dp[i][j]);
            }
        }
    }

    return max_size * max_size;
}

MaximalSquare::~MaximalSquare()
{
}
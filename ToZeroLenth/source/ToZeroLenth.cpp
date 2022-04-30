#include "ToZeroLenth.h"

ToZeroLenth::ToZeroLenth()
{
}

ToZeroLenth::ToZeroLenth(vector<vector<int>> matrix)
{
    this->matrix = matrix;
}

vector<vector<int>> ToZeroLenth::updateMatrix()
{
    if (matrix.empty())
        return {};
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> dp(m, vector<int>(n, INT_MAX - 1));
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                if (j > 0)
                {
                    dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
                }
                if (i > 0)
                {
                    dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
                }
            }
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = m - 1; j >= 0; --j)
        {
            if (matrix[i][j] != 0)
            {
                if (j < m - 1)
                {
                    dp[i][j] = min(dp[i][j], dp[i][j + 1] + 1);
                }
                if (i < n - 1)
                {
                    dp[i][j] = min(dp[i][j], dp[i + 1][j] + 1);
                }
            }
        }
    }
    return dp;
}

ToZeroLenth::~ToZeroLenth()
{
}

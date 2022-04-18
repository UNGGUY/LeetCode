#include "MaxIsland.h"

MaxIsland::MaxIsland()
{
}

MaxIsland::MaxIsland(vector<vector<int>> grid)
{
    this->grid = grid;
}

int MaxIsland::findMaxIsland()
{
    int m = grid.size(), n = m ? grid[0].size() : 0, local_area, area = 0, x, y;
    for (size_t i = 0; i < m; ++i)
    {
        for (size_t j = 0; j < n; ++j)
        {
            if (grid[i][j])
            {
                local_area = 1;
                grid[i][j] = 0;
                stack<pair<int, int>> island;
                island.push({i, j});
                while (!island.empty())
                {
                    pair<int, int> point = island.top();
                    int r = point.first, c = point.second;
                    island.pop();
                    for (size_t k = 0; k < 4; ++k)
                    {
                        x = r + direction[k];
                        y = c + direction[k + 1];
                        if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == 1)
                        {
                            grid[x][y] = 0;
                            ++local_area;
                            island.push({x, y});
                        }
                    }
                }
                area = max(area, local_area);
            }
        }
    }
    return area;
}

int MaxIsland::findMaxIslandRe()
{
    int m = grid.size(), n = m ? grid[0].size() : 0, area = 0;
    for (size_t i = 0; i < m; ++i)
    {
        for (size_t j = 0; j < n; ++j)
        {
            if (grid[i][j])
            {
                area = max(area, _findMaxIslandRe(i, j));
            }
        }
    }
    return area;
}

int MaxIsland::_findMaxIslandRe(int r, int c)
{
    if (grid[r][c] == 0)
        return 0;
    int area = 1, x, y;
    grid[r][c] = 0;
    for (size_t i = 0; i < 4; ++i)
    {
        x = r + direction[i];
        y = c + direction[i + 1];
        if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size())
            area += _findMaxIslandRe(r + direction[i], c + direction[i + 1]);
    }
    return area;
}

MaxIsland::~MaxIsland()
{
}
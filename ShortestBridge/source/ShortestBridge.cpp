#include "ShortestBridge.h"

ShortestBridge::ShortestBridge()
{
}

ShortestBridge::ShortestBridge(vector<vector<int>> area)
{
    this->area = area;
}

int ShortestBridge::findBridge()
{
    int ans = 0;
    int m = area.size(), n = area[0].size();
    queue<pair<int, int>> points;
    bool flipped = false;
    for (size_t i = 0; i < m; i++)
    {
        if (flipped)
            break;
        for (size_t j = 0; j < n; j++)
        {
            if (area[i][j] == 1)
            {
                _findIsland(i, j, points);
                flipped = true;
                break;
            }
        }
    }

    ans = _findBridge(points);

    return ans;
}

int ShortestBridge::_findBridge(queue<pair<int, int>> &points)
{
    int level = 0;
    int x, y;
    while (!points.empty())
    {
        level++;
        int num_points = points.size();
        while (num_points--)
        {
            auto [r, c] = points.front();
            points.pop();
            for (size_t i = 0; i < 4; i++)
            {
                x = r + direction[i];
                y = c + direction[i + 1];
                if (x >= 0 && x < area.size() && y >= 0 && y < area[0].size())
                {
                    if (area[x][y] == 2)
                        continue;
                    if (area[x][y] == 1)
                    {
                        return level;
                    }
                    points.push({x, y});
                    area[x][y] = 2;
                }
            }
        }
    }
    return 0;
}

void ShortestBridge::_findIsland(int r, int c, queue<pair<int, int>> &points)
{
    if (r < 0 || r >= area.size() || c < 0 || c >= area[0].size() || area[r][c] == 2)
    {
        return;
    }

    if (area[r][c] == 0)
    {
        points.push({r, c});
        return;
    }

    area[r][c] = 2;
    _findIsland(r + 1, c, points);
    _findIsland(r - 1, c, points);
    _findIsland(r, c + 1, points);
    _findIsland(r, c - 1, points);
}

ShortestBridge::~ShortestBridge()
{
}
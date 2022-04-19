#include "FriendCircles.h"

FriendCircles::FriendCircles()
{
}

FriendCircles::FriendCircles(vector<vector<int>> relationship)
{
    this->relationship = relationship;
}

int FriendCircles::findCircleNum()
{
    int m = relationship.size(), nums = 0, x, y;
    for (size_t i = 0; i < m; ++i)
    {
        for (size_t j = 0; j < m; ++j)
        {
            if (relationship[i][j])
            {
                relationship[i][j] = 0;
                stack<pair<int, int>> circle;
                circle.push({i, j});
                while (!circle.empty())
                {
                    pair<int, int> point = circle.top();
                    circle.pop();
                    int r = point.first, c = point.second;

                    for (size_t k = 0; k < 4; ++k)
                    {
                        x = r + direction[k];
                        y = c + direction[k + 1];
                        if (x >= 0 && x < m && y >= 0 && y < m && relationship[x][y])
                        {
                            circle.push({x, y});
                            relationship[x][y] = 0;
                        }
                    }
                }
                ++nums;
            }
        }
    }
    return nums;
}

int FriendCircles::findCircleNumRe()
{
    int m = relationship.size(), nums = 0;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (relationship[i][j])
            {
                _findCircleNumRe(i, j);
                nums++;
            }
        }
    }
    return nums;
}

void FriendCircles::_findCircleNumRe(int r, int c)
{
    int x, y;
    if (relationship[r][c] == 0)
        return;
    relationship[r][c] = 0;
    for (size_t i = 0; i < 4; i++)
    {
        x = r + direction[i];
        y = c + direction[i + 1];
        if (x >= 0 && x < relationship.size() && y >= 0 && y < relationship.size() && relationship[x][y])
        {
            _findCircleNumRe(x, y);
        }
    }
}

FriendCircles::~FriendCircles()
{
}
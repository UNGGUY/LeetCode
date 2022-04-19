#include "WaterFlow.h"


WaterFlow::WaterFlow()
{
}

WaterFlow::WaterFlow(vector<vector<int>> chorography)
{
    this->chorography = chorography;
}

vector<vector<int>> WaterFlow::findPoint()
{
    
}

vector<vector<int>> WaterFlow::findPointRe()
{
    int m = chorography.size(), n = chorography[0].size();
    vector<vector<bool>> can_reach_p(m, vector<bool>(n, false));
    vector<vector<bool>> can_reach_a(m, vector<bool>(n, false));
    vector<vector<int>> result;

    for (size_t i = 0; i < m; i++)
    {
        _findPointRe(i,0,can_reach_p);
        _findPointRe(i,n-1,can_reach_a);
    }
    for (size_t i = 0; i < n; i++)
    {
        _findPointRe(0,i,can_reach_p);
        _findPointRe(m-1,i,can_reach_a);
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (can_reach_p[i][j]&&can_reach_a[i][j])
            {
                result.push_back({i,j});
            }
        }
    }

    return result;    
}


void WaterFlow::_findPointRe(int r,int c,vector<vector<bool>> &can_reach)
{
    if(can_reach[r][c])
        return;
    can_reach[r][c]=true;
    int x,y;
    for (size_t i = 0; i < 4; i++)
    {
        x=r+direction[i];
        y=c+direction[i+1];
        if(x>=0&&x<chorography.size()&&y>=0&&y<chorography.size()&&chorography[r][c]<=chorography[x][y])
            _findPointRe(x,y,can_reach);
    }
    
}

WaterFlow::~WaterFlow()
{
}
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class FriendCircles
{
private:
    vector<vector<int>> relationship;
    vector<int> direction{-1, 0, 1, 0, -1};
    void _findCircleNumRe(int r,int c);
public:
    FriendCircles();
    FriendCircles(vector<vector<int>> relationship);
    int findCircleNum();
    int findCircleNumRe();
    ~FriendCircles();
};

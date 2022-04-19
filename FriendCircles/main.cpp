#include <iostream>
#include <vector>
#include "FriendCircles.h"

using namespace std;

int main()
{
    vector<vector<int>> relationship{{1, 1, 0, 0},
                                     {1, 1, 0, 0},
                                     {0, 0, 1, 0},
                                     {0, 0, 0, 1}};
    FriendCircles friendCircles = FriendCircles(relationship);
    FriendCircles friendCirclesRe = FriendCircles(relationship);
    cout << friendCircles.findCircleNum() << endl;
    cout << friendCirclesRe.findCircleNumRe() << endl;
    return 0;
}
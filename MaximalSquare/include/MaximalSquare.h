#include <iostream>
#include <vector>

using namespace std;

class MaximalSquare
{
private:
    vector<vector<int>> matrix;

public:
    MaximalSquare();
    MaximalSquare(vector<vector<int>> matrix);
    int findMaxSquare();
    ~MaximalSquare();
};

#include <iostream>
#include <vector>

using namespace std;

class ToZeroLenth
{
private:
    vector<vector<int>> matrix;
public:
    ToZeroLenth();
    ToZeroLenth(vector<vector<int>> matrix);
    vector<vector<int>> updateMatrix();
    ~ToZeroLenth();
};


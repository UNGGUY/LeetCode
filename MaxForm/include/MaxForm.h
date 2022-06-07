#include <iostream>
#include <vector>

using namespace std;

class MaxForm
{
private:
    vector<string> array;
    int m;
    int n;
    pair<int, int> count(const string &str);

public:
    MaxForm();
    MaxForm(vector<string> array, int m, int n);
    int findMaxForm();
    ~MaxForm();
};

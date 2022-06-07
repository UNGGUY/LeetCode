#include <iostream>
#include <vector>
#include "MaxForm.h"
using namespace std;

int main()
{
    vector<string> array{"10", "0001", "111001", "1","0"};
    int m = 5, n = 3;
    MaxForm maxForm = MaxForm(array, m, n);
    cout << maxForm.findMaxForm() << endl;
    return 0;
}
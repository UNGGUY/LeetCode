#include <iostream>
#include <vector>
#include "PerfectSquares.h"

using namespace std;

int main()
{
    int num = 13;
    PerfectSquares perfectSquares = PerfectSquares(num);
    cout << perfectSquares.squaresCollection() << endl;
    return 0;
}
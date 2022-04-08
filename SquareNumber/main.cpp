#include <iostream>
#include "SquareNumber.h"
using namespace std;

int main()
{
    int target=10;
    SquareNumber squareNumber=SquareNumber(target);
    vector<int> result = squareNumber.sumSquareNumber();
    cout << result[0] << " " << result[1] << endl;
    return 0;
}

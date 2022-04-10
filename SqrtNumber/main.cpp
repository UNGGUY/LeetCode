#include <iostream>
#include "SqrtNumber.h"

using namespace std;

int main()
{
    int base = 8;
    SqrtNumber sqrtNumber = SqrtNumber(base);

    cout << sqrtNumber.findNumber() << endl;

    return 0;
}
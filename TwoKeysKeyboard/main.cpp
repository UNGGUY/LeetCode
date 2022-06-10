#include <iostream>
#include <vector>
#include "TwoKeysKeyboard.h"

using namespace std;

int main()
{
    TwoKeysKeyboard twoKeysKeyboard = TwoKeysKeyboard(3);
    cout << twoKeysKeyboard.minSteps() << endl;
    return 0;
}
#include <iostream>
#include "DecodeWays.h"

using namespace std;

int main()
{
    string nums = "226";
    DecodeWays decodeWays = DecodeWays(nums);
    cout << decodeWays.findDecode() << endl;
    return 0;
}
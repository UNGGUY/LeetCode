#include <iostream>
#include "EditDistance.h"

using namespace std;

int main()
{
    string word1 = "horse";
    string word2 = "rse";
    EditDistance editDistance = EditDistance(word1, word2);
    cout << editDistance.minDistance() << endl;
    return 0;
}
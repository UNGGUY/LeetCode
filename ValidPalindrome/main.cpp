#include <iostream>
#include <string>
#include "ValidPalindrome.h"

using namespace std;

int main()
{
    string str = "abcdba";

    ValidPalindrome validPalindrome = ValidPalindrome(str);

    if (validPalindrome.detectValidPalindrome())
        cout << "true"
             << " " << validPalindrome.getPoint() << endl;
    else
        cout << "false" << endl;

    return 0;
}
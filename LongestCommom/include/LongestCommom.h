#include <iostream>
#include <vector>

using namespace std;

class LongestCommom
{
private:
    string str1;
    string str2;
public:
    LongestCommom();
    LongestCommom(string str1,string str2);
    int findCommom();
    ~LongestCommom();
};



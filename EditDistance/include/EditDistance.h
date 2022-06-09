#include <iostream>
#include <vector>

using namespace std;

class EditDistance
{
private:
    string word1;
    string word2;
public:
    EditDistance();
    EditDistance(string word1,string word2);
    int minDistance();
    ~EditDistance();
};


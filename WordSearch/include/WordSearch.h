#include <iostream>
#include <vector>

using namespace std;

class WordSearch
{
private:
    vector<vector<int>> board;
    vector<int> word;
    void _findWord(int r,int c,vector<vector<bool>> &visited,bool &find,int pos);
public:
    WordSearch();
    WordSearch(vector<int> word,vector<vector<int>> board);
    bool findWord();
    ~WordSearch();
};
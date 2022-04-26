#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class WordLadder
{
private:
    vector<string> wordList;
    string beginWord;
    string endWord;
    void backtracking(string src,string dst,vector<vector<string>> &ans,unordered_map<string,vector<string>> &next,vector<string> &path);
public:
    WordLadder();
    WordLadder(vector<string> wordList,string beginWord,string endWord);
    vector<vector<string>> findLadder();
    ~WordLadder();
};


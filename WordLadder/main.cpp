#include <iostream>
#include <vector>
#include "WordLadder.h"

using namespace std;

int main()
{
    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList{"hot", "dot", "dog", "lot", "log", "cog"};
    WordLadder wordLadder = WordLadder(wordList, beginWord, endWord);
    vector<vector<string>> ans = wordLadder.findLadder();
    for (auto item : ans)
    {
        for (auto it : item)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
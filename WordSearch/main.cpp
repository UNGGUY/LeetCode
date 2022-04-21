#include <iostream>
#include <vector>
#include "WordSearch.h"

using namespace std;

int main()
{
    vector<int> word{'A', 'B', 'C', 'C', 'E', 'D'};
    vector<vector<int>> board = {{'A', 'B', 'C', 'E'},
                                 {'S', 'F', 'C', 'S'},
                                 {'A', 'D', 'E', 'E'}};
    WordSearch wordSearch = WordSearch(word, board);
    cout << (wordSearch.findWord() ? "true" : "false") << endl;
    return 0;
}
#include "WordSearch.h"

WordSearch::WordSearch()
{
}

WordSearch::WordSearch(vector<int> word, vector<vector<int>> board)
{
    this->word = word;
    this->board = board;
}

bool WordSearch::findWord()
{
    int m = board.size(), n = board[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    bool find = false;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            _findWord(i, j, visited, find, 0);
        }
    }
    return find;
}

void WordSearch::_findWord(int r, int c, vector<vector<bool>> &visited, bool &find, int pos)
{
    if (r < 0 || r >= board.size() || c < 0 || c >= board.size())
    {
        return;
    }
    if (visited[r][c] || find || board[r][c] != word[pos])
    {
        return;
    }
    if (pos == word.size() - 1)
    {
        find = true;
        return;
    }
    visited[r][c] = true;
    _findWord(r + 1, c, visited, find, pos + 1);
    _findWord(r - 1, c, visited, find, pos + 1);
    _findWord(r, c + 1, visited, find, pos + 1);
    _findWord(r, c - 1, visited, find, pos + 1);
    visited[r][c] = false;
}

WordSearch::~WordSearch()
{
}

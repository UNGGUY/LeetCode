#include "WordLadder.h"

WordLadder::WordLadder()
{
}

WordLadder::WordLadder(vector<string> wordList, string beginWord, string endWord)
{
    this->wordList = wordList;
    this->beginWord = beginWord;
    this->endWord = endWord;
}

vector<vector<string>> WordLadder::findLadder()
{
    vector<vector<string>> ans;
    unordered_set<string> diet;
    for (auto item : wordList)
    {
        diet.insert(item);
    }

    if (!diet.count(endWord))
    {
        return ans;
    }

    diet.erase(beginWord);
    diet.erase(endWord);

    unordered_set<string> q1{beginWord}, q2{endWord};
    unordered_map<string, vector<string>> next;

    bool reversed = false, found = false;

    while (!q1.empty())
    {
        unordered_set<string> q;
        for (auto w : q1)
        {
            string s = w;
            for (size_t i = 0; i < s.size(); i++)
            {
                char ch = s[i];
                for (size_t j = 0; j < 26; j++)
                {

                    s[i] = j + 'a';
                    if (q2.count(s))
                    {
                        reversed ? next[s].push_back(w) : next[w].push_back(s);
                        found = true;
                    }
                    if (diet.count(s))
                    {
                        reversed ? next[s].push_back(w) : next[w].push_back(s);
                        q.insert(s);
                    }
                }
                s[i] = ch;
            }
        }
        if (found)
        {
            break;
        }

        for (auto item : q)
        {
            diet.erase(item);
        }

        if (q.size() <= q2.size())
        {
            q1 = q;
        }
        else
        {
            reversed = !reversed;
            q1 = q2;
            q2 = q;
        }
    }
    if (found)
    {
        vector<string> path{beginWord};
        backtracking(beginWord, endWord, ans, next, path);
    }

    return ans;
}

void WordLadder::backtracking(string src, string dst, vector<vector<string>> &ans, unordered_map<string, vector<string>> &next, vector<string> &path)
{
    if (src == dst)
    {
        ans.push_back(path);
        return;
    }

    for (auto item : next[src])
    {
        path.push_back(item);
        backtracking(item, dst, ans, next, path);
        path.pop_back();
    }
}

WordLadder::~WordLadder()
{
}

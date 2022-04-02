#include <algorithm>
#include "contentChildren.h"
using namespace std;

contentChildren::contentChildren()
{

}

contentChildren::contentChildren(vector<int> children,vector<int> cookies)
{
    this->children=children;
    this->cookies=cookies;
}

contentChildren::~contentChildren()
{

}

int contentChildren::findContentChildren()
{
    sort(children.begin(),children.end());
    sort(cookies.begin(),cookies.end());
    vector<int>::iterator it=children.begin();
    int num=0;
    for(auto item : cookies)
    {
        if(*it<=item)
        {
            
            num++;
            if(it==children.end())
                break;
            it++;
        }
    }

    return num;
}
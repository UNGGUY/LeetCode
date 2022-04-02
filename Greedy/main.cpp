#include <iostream>
#include "contentChildren.h"
using namespace std;

int main()
{
    cout << "helloworld" <<endl;
    vector<int> children={1,2};
    vector<int> cookies={2,3};
    contentChildren contentchildren = contentChildren(children,cookies);
    cout<< contentchildren.findContentChildren()<<endl;
    return 0;
}
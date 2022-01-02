#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0, t, i;
    string a="++X", b="X++", c="--X", d="X--";
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        if(str==a)
            ++x;
        else if(str==b)
            x++;
        else if(str==c)
            --x;
        else if(str==d)
            x--;
    }
    cout<<x<<endl;
}

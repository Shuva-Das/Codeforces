#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    int  t, i, len;
    cin>>t;
    while(t--)
    {
        cin>>ch;
        len = strlen(ch);
        //cout<<len<<endl;
        if(len<=10)
            cout<<ch<<endl;
        else
            cout<<ch[0]<<len-2<<ch[len-1]<<endl;

    }
}

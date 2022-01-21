#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, A=0,D=0;
    cin>>t;
    string str;
    cin>>str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]=='A')
            A++;
        else if(str[i]=='D')
            D++;
    }

    if(A==D)
        cout<<"Friendship"<<endl;
    else if(A>D)
        cout<<"Anton"<<endl;
    else
        cout<<"Danik"<<endl;
}

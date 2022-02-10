/*
    https://codeforces.com/problemset/problem/467/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, p, q, count=0;
    cin>>t;
    while(t--)
    {
        cin>>p>>q;
        if(p+2<=q)
        {
            count++;
        }
    }
    cout<<count<<endl;
}

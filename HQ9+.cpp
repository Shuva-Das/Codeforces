/*
    https://codeforces.com/problemset/problem/133/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, count=0;
    string str;
    getline(cin, str);
    for(i=0; i<str.length(); i++)
    {
        if(str[i]>=33 && str[i]<=126)
        {
            if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
                count++;
        }

    }
    if(count==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}

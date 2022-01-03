#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    string str;
    int count = 0;
    cin>>str;
    for(i=0; i<n; i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}

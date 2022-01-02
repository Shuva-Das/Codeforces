#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, k, count=0;
    cin>>n>>k;
    int x[n];
    for(i=0; i<n; i++)
    {
        cin>>x[i];
    }
    for(i=0; i<n; i++)
    {
        if(x[i]>=x[k-1]&&x[i]>0)
            count++;
    }
    cout<<count<<endl;
}

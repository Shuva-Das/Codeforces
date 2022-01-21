#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sum=0, numberOfCoin=0, tk=0;
    cin>>n;
    int coin[n];
    for(i=0; i<n; i++)
    {
        cin>>coin[i];
        sum=sum+coin[i];
    }
    sum=sum/2;
    sort(coin,coin+n);
    for(i=n-1;i>=0;i--)
    {
        tk=tk+coin[i];
        numberOfCoin++;
        if(tk>sum)
            break;
    }
        cout<<numberOfCoin<<endl;
}


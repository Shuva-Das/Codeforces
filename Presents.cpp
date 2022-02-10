/*
    https://codeforces.com/problemset/problem/136/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    int arr[n+1], k;
    for(i=1; i<=n; i++)
    {
        cin>>k;
        arr[k]=i;
    }
    for(i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

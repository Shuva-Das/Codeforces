#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, count=0;
    cin>>t;
    int a[t], b[t], c[t];
    int sumA=0, sumB=0, sumC=0;
    for(j=0; j<t; j++)
    {
        cin>>a[j];
        sumA=sumA+a[j];
        cin>>b[j];
        sumB=sumB+b[j];
        cin>>c[j];
        sumC=sumC+c[j];
    }
    if(sumA==0&&sumB==0&&sumC==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

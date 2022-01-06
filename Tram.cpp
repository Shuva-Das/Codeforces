#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a,b;
    cin>>n;
    int remaing=0;
    int max=0;
    while(n--)
    {
        cin>>a>>b;
        if(a==0)
            remaing=remaing+b;
        else
            remaing=(remaing+b)-a;
        if(remaing>=max)
            max=remaing;
    }
    cout<<max<<endl;
}

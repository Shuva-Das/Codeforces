#include<bits/stdc++.h>
using namespace std;
int main()
{
    double k,n,w, Sn;
    cin>>k>>n>>w;
    /*
    3+6+9+12
    a=3
    d=2
    Sn=n/2(2a+(n-1)d)
    */
    Sn = (w/2)*(2*k+(w-1)*((2*k)-k));
    if(Sn-n<=0)
        cout<<0<<endl;
    else
        cout<<int (Sn-n)<<endl;
}

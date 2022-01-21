#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, i, count=0;
    int luckyNumber[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin>>num;
    for(i=0; i<14; i++)
    {
        if(num%luckyNumber[i]==0)
            count=1;
    }
    if(count==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, num, sTime;
    cin>>num>>sTime;
    for(i=0; i<sTime; i++)
    {
        if(num%10==0)
            num=num/10;
        else
            num = num - 1;
    }
    cout<<num<<endl;

}

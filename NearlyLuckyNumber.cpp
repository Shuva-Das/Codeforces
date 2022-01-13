#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int lucky=0;
    cin>>n;
    while(n)
    {
        if(n%10==4||n%10==7)
            lucky++;
        n=n/10;
    }
    if(lucky==4||lucky==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}

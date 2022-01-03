#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b, limak, bob;
    cin>>a>>b;
    limak=a;
    bob=b;
    int count=0;
    while(true)
    {
        count++;
        limak=limak*3;
        bob=bob*2;
        if(limak>bob)
            break;


    }
    cout<<count<<endl;
}

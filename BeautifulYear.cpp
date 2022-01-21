#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year, a,b,c,d;
    //2013 = dcba || d=2 c=0 b=1 a=3
    cin>>year;
    while(true)
    {
        year+=1;
        d=year/1000;
        c=year/100%10;
        b=year/10%10;
        a=year%10;

        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            cout<<year<<endl;
            break;
        }
    }

}

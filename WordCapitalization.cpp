#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i;
    cin>>str;
    for(i=0; i<str.size(); i++)
    {
        if(i==0)
        {
            str[i]=toupper(str[i]);
            cout<<str[i];
        }

        else
         cout<<str[i];
    }

    cout<<endl;
}

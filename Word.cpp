#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i, Upper=0, Lower=0;
    cin>>str;
    int len=str.size();
    for(i=0; i<len; i++)
    {
        if(str[i]>64&&str[i]<91)
            Upper++;
        else
            Lower++;
    }
    if(Lower>=Upper)
        for(i=0; i<len; i++)
    {
        cout<<(char)tolower(str[i]);
    }

    else
        for(i=0; i<len; i++)
    {
        cout<<(char)toupper(str[i]);
    }
    cout<<endl;

}

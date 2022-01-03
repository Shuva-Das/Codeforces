#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, len, count;
    string name;
    cin>>name;
    len=name.size();
    count=len;
    int gender[len]={1};
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(name[i]==name[j])
            {
                count--;
                break;
            }
        }

    }
    //cout<<count<<endl;
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
}

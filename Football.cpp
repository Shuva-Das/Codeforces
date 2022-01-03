#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, len, count;
    string pos;
    cin>>pos;
    len=pos.size();
    count=1;
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(pos[i]==pos[j])
            {
                count++;
                if(count>=7)
                    break;
            }
            else{
                break;
                i=j;
            }
        }
        if(count<7)
            count=1;
        else
            break;
    }
    //cout<<count<<endl;
    if(count>=7)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

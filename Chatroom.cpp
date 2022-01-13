#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j, k, l, m, n, count=0;
    string msg;
    cin>>msg;
    for(i=0; i<msg.size(); i++)
    {
        if(msg[i]=='h')
        {
            for(j=i+1; j<msg.size(); j++)
            {
                if(msg[j]=='e')
                {
                    for(k=j+1; k<msg.size(); k++)
                    {
                        if(msg[k]=='l')
                        {
                            for(l=k+1; l<msg.size(); l++)
                            {
                                if(msg[l]=='l')
                                {
                                    for(m=l+1; m<msg.size(); m++)
                                    {
                                        if(msg[m]=='o')
                                        {
                                            count=1;
                                            break;
                                        }
                                    }
                                    if(count==1)
                                        break;
                                }
                            }
                            if(count==1)
                                break;
                        }
                    }
                    if(count==1)
                        break;
                }
            }
            if(count==1)
                break;
        }
    }
    if(count==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

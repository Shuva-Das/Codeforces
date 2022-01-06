#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t, i, j;
    cin>>n>>t;
    string que;
    cin>>que;
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < que.size()-1; j++)
        {
            if(que[j] == 'B' && que[j + 1] == 'G')
            {
                que[j] = 'G';
                que[j + 1] = 'B';
                j++;
            }
        }
    }
    cout<<que<<endl;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[5][5], i, j;
    int row, col, step;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>ara[i][j];
            if(ara[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }

    if(row==2&&col==2)
        cout<<0<<endl;
    else
    {
        step=abs(2-row)+abs(2-col);
        cout<<step<<endl;
    }
}

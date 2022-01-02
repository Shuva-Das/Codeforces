#include<bits/stdc++.h>
using namespace std;
int main()
{
    int one=0, two=0, three=0, i, j;
    string str;
    cin>>str;
    int len=str.size();
    cout<<len<<endl;
    for(i=1; i<=3; i++)
    {
        for(j=0; j<len; j++)
        {
            if(i==1&&str[j]==1)
            {
                if(j=len-1)
                {
                 cout<<1;
                 break;
                }
                else
                    cout<<1<<"+";
            }
            else if(i==2&&str[j]==2)
            {
                if(j=len-1)
                {
                 cout<<2;
                 break;
                }
                else
                    cout<<2<<"+";
            }
            else if(i==3&&str[j]==3)
            {
                if(j=len-1)
                {
                 cout<<3;
                 break;
                }
                else
                    cout<<3<<"+";
            }
        }
    }
    /*for(i=0; i<len; i++)
    {
        if(str[i]==1)
        {
            one++;
        }
        else if(str[i]==2)
        {
            two++;
        }
        else if(str[i]==3){
            three++;
        }
    }

    int length=one+two+three;
    for(i=0; i<len; i++)
    {
        if(i<=one)
        {
            if(i==length)
                cout<<1;
            else
                cout<<1<<"+";
        }

        else if(i<=two)
        {
            if(i==length)
                cout<<2;
            else
                cout<<2<<"+";
        }

        else if(i<=three)
        {
            if(i==length)
                cout<<3;
            else
                cout<<3<<"+";
        }

    }*/
}

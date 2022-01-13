#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j, len1, len2, count=0;
    string str1, str2;
    cin>>str1>>str2;
    len1=str1.size();
    len2=str2.size();
    if(len1==len2)
    {
        //int i=0, j=len2-1;
        for(i=0,j=len2-1; i<len1,j>=0;i++,j--)
        {
            if(str1[i]!=str2[j])
            {
                count++;
                break;
            }
        }
        if(count==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    else
        cout<<"NO"<<endl;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin>>str1>>str2;
    for_each(str1.begin(), str1.end(), [](char & str1)
             {
                 str1=tolower(str1);
             }
             );
    std::for_each(str2.begin(), str2.end(), [](char & str2)
             {
                 str2=::tolower(str2);
             }
             );

    //cout<<str1<<endl<<str2<<endl;
    if(str1==str2)
        cout<<0<<endl;
    else if(str1>str2)
        cout<<1<<endl;
    else
        cout<<-1<<endl;

}

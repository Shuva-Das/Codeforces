#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for_each(str.begin(), str.end(), [](char & str)
             {
                str = tolower(str);
             }
             );
    for_each(str.begin(), str.end(), [](char & str)
              {
        if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u'||str=='y')
            cout<<"";
        else
            cout<<"."<<str;

    }
             );

    cout<<endl;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2,a3,a4,cnt=0;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
            cnt += a1;
        else if(s[i]=='2')
            cnt += a2;
        else if(s[i]=='3')
            cnt += a3;
        else if(s[i]=='4')
            cnt += a4;
    }
    cout<<cnt<<endl;
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len,cnt=0,result;
        len=s.length();
        if((4-len)==0)
            cnt=0;
        else if((4-len)==1)
            cnt=4;
        else if((4-len)==2)
            cnt=7;
        else if((4-len)==3)
            cnt=9;
        result=((s[0]-48)*10)-cnt;

        cout<<result<<endl;

    }
}

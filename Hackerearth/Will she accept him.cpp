#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int cnt=0,flag=0;
        for(int i=0; i<s1.size();i++)
        {
            for(int j=0; j<s2.size();j++)
            {
                if(s1[i]==s2[j])
                {
                    cnt++;
                    break;
                }
            }
            if(cnt==s1.size())
                {
                    flag=1;
                    break;
                }
        }
        if(flag==1)

            cout<<"Love you too"<<endl;
        else

            cout<<"We are only friends"<<endl;
    }
    return 0;
}

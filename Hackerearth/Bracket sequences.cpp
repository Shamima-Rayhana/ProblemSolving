#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int cnt=0,result=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(')
        {
            for(int j=i;j<i+l;j++)
            {
                if(s[j%l]=='(')
                {
                    cnt++;
                }
                else
                {
                    cnt--;
                }
                if(cnt<0)
                {
                    break;
                }
            }
            if(cnt==0)
                result++;
        }
    }
    cout<<result<<endl;

    return 0;
}

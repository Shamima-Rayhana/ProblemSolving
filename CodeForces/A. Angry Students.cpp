#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,j;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
            {
                j=i+1;
                while(s[j]=='P' && j<n)
                    j++;
                j=j-1;
                cnt=max(cnt,j-i);
                i=j;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

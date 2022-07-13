#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;

        }
        int x=m.size();
        //cout<<x<<endl;
        cout<<n+x<<endl;



}
return 0;
}


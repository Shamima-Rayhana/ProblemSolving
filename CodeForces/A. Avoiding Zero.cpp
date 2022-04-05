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
        int sum=0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x;
            v.push_back(x);
        }
        if(sum==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            if(sum>0)
            {
                sort(v.begin(),v.end(),greater<int>());
            }
            else
            {
                sort(v.begin(),v.end());
            }
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

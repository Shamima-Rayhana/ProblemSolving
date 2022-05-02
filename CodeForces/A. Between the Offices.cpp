#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int S=0,F=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='S'&&s[i+1]=='F')
        {
            S++;
        }
        if(s[i]=='F'&&s[i+1]=='S')
        {
            F++;
        }
    }
    if(S>F)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

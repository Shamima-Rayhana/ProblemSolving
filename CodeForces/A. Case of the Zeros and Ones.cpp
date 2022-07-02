#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==49)
            cnt1++;
        else if(s[i]==48)
            cnt2++;
    }
    //cout<<cnt1<<" "<<cnt2<<endl;
    cout<<n-2*min(cnt1,cnt2)<<endl;
    return 0;

}

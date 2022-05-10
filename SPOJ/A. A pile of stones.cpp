#include<bits/stdc++.h>

//Auther: Shamima Rayhana Rumi
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='+')
            cnt++;
        else
            cnt--;
        if(cnt<0)
            cnt=0;
    }

    cout<<cnt<<endl;
    return 0;
}

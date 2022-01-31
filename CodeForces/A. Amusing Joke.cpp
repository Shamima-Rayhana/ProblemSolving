#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3;
    int l3=s3.length();
    s4=s1+s2;
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    if(s4==s3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

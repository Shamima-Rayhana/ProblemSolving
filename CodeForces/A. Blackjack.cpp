#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n-10;
    if(n<=10)
        cout<<0<<endl;
    else if(n>21)
        cout<<0<<endl;
    else if(n==20)
        cout<<15<<endl;
    else
        cout<<4<<endl;
    return 0;
}

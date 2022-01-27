#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int p=(n*2)-1;
    for(int i=1;i<=p;i+=2)
    {
        sum+=i;
    }
    int result=(sum*2)-p;
    cout<<result<<endl;
    return 0;
}

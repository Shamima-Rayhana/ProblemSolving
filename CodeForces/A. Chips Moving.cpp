#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+5],c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            c1++;
        else
            c2++;
    }
    cout<<min(c1,c2)<<endl;
}

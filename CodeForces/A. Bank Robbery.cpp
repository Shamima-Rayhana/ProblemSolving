#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int n,x,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>b && x<c)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;

}

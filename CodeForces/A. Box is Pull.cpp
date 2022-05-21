#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x2==x1 || y2==y1)
            cout<<abs(x2-x1)+abs(y2-y1)<<endl;
        else
            cout<<abs(x2-x1)+abs(y2-y1)+2<<endl;

    }
    return 0;
}

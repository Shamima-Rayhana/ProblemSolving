#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,p;
        cin>>g>>p;
        int n;
        cin>>n;
        int x,y,c1=0,c2=0;
        for(int i=1;i<=n;i++)
        {
            cin>>x>>y;
            if(x==1)
            {
                c1++;
            }
            if(y==1)
            {
                c2++;
            }
        }
        cout<<(max(c1,c2)*min(g,p))+(min(c1,c2)*max(g,p))<<endl;
    }
    return 0;
}

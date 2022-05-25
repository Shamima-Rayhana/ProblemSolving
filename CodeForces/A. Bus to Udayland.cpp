#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    char a[n][5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>a[i][j];
        }

    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(a[i][j]=='O' && a[i][j+1]=='O')
            {
                cnt=1;
                a[i][j]='+';
                a[i][j+1]='+';
                break;
            }
        }
        if(cnt==1)
            break;

    }
    if(cnt==1)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }

    }
    else
        cout<<"NO"<<endl;

    return 0;
}

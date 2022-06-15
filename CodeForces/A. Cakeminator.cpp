#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    char a[r][c];
    int cnt1=0,cnt2=0;
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>a[i][j];

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
        {
            if(a[i][j]=='S')
            {
                cnt1++;
                break;
            }
        }

    for(int j=0; j<c; j++)
        for(int i=0; i<r; i++)
        {
            if(a[i][j]=='S')
            {
                cnt2++;
                break;
            }
        }

    cout<<(r*c)-(cnt1*cnt2)<<endl;
    return 0;
}

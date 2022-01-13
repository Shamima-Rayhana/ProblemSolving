#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[8][8];
    int q,r,b,n,p,k,Q,R,B,N,P,K;
    q=r=b=n=p=k=Q=R=B=N=P=K=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='q')
                q++;
            else if(a[i][j]=='r')
                r++;
            else if(a[i][j]=='b')
                b++;
            else if(a[i][j]=='n')
                n++;
            else if(a[i][j]=='p')
                p++;
            else if(a[i][j]=='k')
                k++;
            else if(a[i][j]=='Q')
                Q++;
            else if(a[i][j]=='R')
                R++;
            else if(a[i][j]=='B')
                B++;
            else if(a[i][j]=='N')
                N++;
            else if(a[i][j]=='P')
                P++;
            else if(a[i][j]=='K')
                K++;
        }

    }
    int sum1=q*9+r*5+b*3+n*3+p*1;
    int sum2=Q*9+R*5+B*3+N*3+P*1;
    if(sum2>sum1)
        cout<<"White"<<endl;
    else if(sum1>sum2)
        cout<<"Black"<<endl;
    else
        cout<<"Draw"<<endl;
    return 0;
}

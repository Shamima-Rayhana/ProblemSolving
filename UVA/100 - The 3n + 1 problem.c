#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int i,j,cnt,Max;
    while(scanf("%d %d",&n,&m)==2)
    {
        Max=0;
        for(i=min(n,m); i<=max(n,m); i++)
        {
            cnt=1;
            j=i;
            while(j>1)
            {
                if(j%2==0)
                {
                    j/=2;
                }
                else
                {
                    j=(3*j)+1;
                }
                cnt++;
            }
            if(cnt>=Max)
                Max=cnt;
        }
        cout<<n<<" "<<m<<" "<<Max<<endl;
    }
    return 0;
}

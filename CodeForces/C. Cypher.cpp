#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int wh;
        cin>>wh;
        int moves,up=0,down=0,m,p;
        string s;
        int finalDigit[wh+1],initialDigit[wh+1];
        for(int i=0; i<wh; i++)
        {
            cin>>finalDigit[i];

        }
        for(int i=0; i<wh; i++)
        {

            cin>>moves;
            cin>>s;
            for(int j=0; j<moves; j++)
            {
                if(s[j]=='U')
                    up++;
                else
                    down++;
            }
            //cout<<up<<" "<<down<<endl;
            if(up>down)
            {
                m=up-down;
                initialDigit[i]=(finalDigit[i]-m)%10;
                if(initialDigit[i]<0)
                {
                    initialDigit[i]=initialDigit[i]+10;
                }
            }
            else if(down>up)
            {
                p=down-up;
                initialDigit[i]=abs(finalDigit[i]+p)%10;

            }
            else
            {
                initialDigit[i]=finalDigit[i];
            }
            //cout<<down<<" "<<m<<" "<<finalDigit[i]<<" "<<initialDigit[i]<<endl;
            up=0;
            down=0;
            //cout<<initialDigit<<" ";

        }
        for(int i=0;i<wh;i++)
        {
            cout<<initialDigit[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}



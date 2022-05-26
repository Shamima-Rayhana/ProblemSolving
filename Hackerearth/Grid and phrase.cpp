#include<bits/stdc++.h>

using namespace std;

/*
Author: Shamima Rayhana Rumi
Date: 26-05-2022
Content: Toeplitz matrix in C++
*/

int main()
{
    int n,m;
    cin>>n>>m;
    char s[n+1][m+1];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='s')
            {
                // for vertically
                if(i+3<n)
                {
                    if(s[i][j]=='s' && s[i+1][j]=='a' && s[i+2][j]=='b' && s[i+3][j]=='a')
                    {
                        //cout<<"RUMI"<<endl;
                        cnt++;
                        //cout<<cnt<<endl;
                    }
                }
                //Upward Diagonally
                if(i-3>=0 && j+3<m)
                {
                    if(s[i][j]=='s' && s[i-1][j+1]=='a' && s[i-2][j+2]=='b' && s[i-3][j+3]=='a')
                    {
                        //cout<<"RR"<<endl;
                        cnt++;
                    }

                }
                //for Horizontally
                if(j+3<m)
                {
                    if(s[i][j]=='s' && s[i][j+1]=='a' && s[i][j+2]=='b' && s[i][j+3]=='a')
                    {
                        cnt++;
                    }

                }
                // for downward diagonally
                if(i+3<n && j+3<m)
                {
                    if(s[i][j]=='s' && s[i+1][j+1]=='a' && s[i+2][j+2]=='b' && s[i+3][j+3]=='a')
                    {
                        cnt++;
                    }
                }
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}

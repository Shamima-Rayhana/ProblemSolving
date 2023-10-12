#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x=0;
    cin>>n>>m;
    int arr1[n+1]={0}, arr2[m+1];
    int res[n]={-1};
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
        res[arr2[i]-1]++;
    }

    for(int i=1;i<m;i++)
    {
        int j=0;
        for(j=0; j<i;j++)
        {
            if(arr2[i]==arr2[j])
            {
                break;
            }
        }
        int k=1;
        if(i==j)
        {
            x++;
            res[n-k]=i;
            k--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;

    //cout<<result<<endl;

    return 0;
}

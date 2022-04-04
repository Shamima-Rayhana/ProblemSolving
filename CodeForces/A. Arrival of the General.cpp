#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,max=0,min=101,max_index,min_index;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            max_index=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            min_index=i;
        }
    }
    if(min_index<max_index)
    {
        min_index =(n-1)-min_index;
        cout<<(max_index+min_index-1)<<endl;
    }
    else
    {
        min_index=(n-1)-min_index;
        cout<<max_index+min_index<<endl;
    }
    return 0;
}

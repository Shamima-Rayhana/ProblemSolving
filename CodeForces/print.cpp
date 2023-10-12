#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >>t;
    for(int k=0; k<t; k++)
    {
        int n, a, b;
        int arr[n+1];
        cin>>n>>a>>b;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
       // sort(arr, arr+n);
        int cnt = 0;
        for(int i=0; i<n; i++)
            for(int j=n-1;j>=0;j--)
        {

            if(((arr[i]+arr[j])>=a) && ((arr[i]+arr[j])<=b))
            {
                cout<<arr[i]+arr[j]<<endl;
                cnt++;
            }

        }
        cout<<"Case "<<k+1<<": "<<cnt<<endl;

    }
    return 0;
}

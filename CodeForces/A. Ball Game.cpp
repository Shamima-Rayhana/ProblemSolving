#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=1;
    for(int i=1;i<n;i++)
    {
        sum=(sum+i)%n;
        if(sum==0)
            cout<<n<<" ";
        else
            cout<<sum<<" ";
    }
    cout<<endl;
    return 0;
}

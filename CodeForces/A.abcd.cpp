#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int arr[n+1];
       for(int i=0;i<n-1;i++)
       {
           cin>>arr[i];
       }

       int n_sum =0, p_sum =0;
       for(int i=0;i<n-1;i++)
       {
           if(arr[i]<0)
            n_sum += arr[i];
            else
                p_sum += arr[i];
       }
       cout << -(p_sum + n_sum) <<endl;

   }
   return 0;
}

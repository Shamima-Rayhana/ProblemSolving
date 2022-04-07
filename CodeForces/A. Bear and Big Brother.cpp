#include<bits/stdc++.h>

using namespace std;

int main()

{
   int limak_years, bob_years, year = 0;
   cin >> limak_years >> bob_years;
   while(limak_years <= bob_years)
   {
       year++;
       limak_years *= 3;
       bob_years *= 2;

   }
   cout<<year<<endl;
   return 0;
}

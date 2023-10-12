#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, c;
        cin>>n>>c;
        //declaring vector of pairs
        vector< pair <long long int,long long int> > vect;
        long long int arr1[n+2], arr2[n+2];
        for(int i=0; i<n; i++)
        {
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>arr2[i];
        }

        long long int sum = c, x = n-1;


        for (int i=0; i<n; i++)
            vect.push_back( make_pair(arr2[i],arr1[i]) );

        vect.push_back({sum, 1000000000});


        sort(vect.begin(), vect.end());

        for (int i = 0; i < vect.size(); i++)
        {
            long long int y = min(x, vect[i].second);

            x -= y;
            sum += (y * (vect[i].first));
        }
        cout<< sum<< endl;

    }
    return 0;
}


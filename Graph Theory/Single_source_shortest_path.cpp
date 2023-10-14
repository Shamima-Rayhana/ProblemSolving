#include<bits/stdc++.h>

using namespace std;

vector<int>ar[1001];
int vis[1001];
int dis[1001];

void dfs(int node, int d)
{
    vis[node] = 1;
    dis[node] = d;
    for(int i=0;i<ar[node].size(); i++)
    {
        int child = ar[node][i];
        if(vis[child] == 0)
        {
            dfs(child, dis[node]+1);
        }
    }

}

int main()
{
    int n, q, a,b;
    cin>>n;
    for(int i=1; i<=n-1; i++)
    {
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    dfs(1, 0);
    cin>>q;

    int ans = -1, min_dist = 1000000000;
    while(q--)
    {
        int girl_city;
        cin>>girl_city;

        if((dis[girl_city]) < min_dist)
        {
            min_dist = dis[girl_city];
            ans = girl_city;
        }
        else if(dis[girl_city] == min_dist && girl_city<ans)
        {
            ans = girl_city;
        }
    }
    cout<<ans<<endl;

    return 0;
}

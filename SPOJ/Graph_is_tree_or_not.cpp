#include<bits/stdc++.h>

using namespace std;

vector<int>ar[10001];
int vis[10001];

void dfs(int node)
{
    vis[node] = 1;
    for(int i=0; i<ar[node].size(); i++)
    {
        int child = ar[node][i];
        if(vis[child] == 0)
        {
            dfs(child);
        }
    }
}

int main()
{
    int n,m, a, b;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);

    }
    int cc_count = 0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i] == 0)
        {
            dfs(i);
            cc_count++;
        }
    }
    if(cc_count == 1 && m == n-1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;

}

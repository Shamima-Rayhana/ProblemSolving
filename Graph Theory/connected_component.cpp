#include<bits/stdc++.h>

using namespace std;

int vis[100001];
vector<int>ar[100001];


void dfs( int node)
{
    vis[node] = 1;
    //for( int child : ar[node])
    for(int i =0; i<ar[node].size(); i++)
    {
        int child = ar[node][i];
        if(!vis[child]) //if(vis[child] ==0)
        {
            dfs(child);
        }
    }
}


int main()
{
    int n, e, a, b;
    cin>>n>>e;
    //adjacent matrix
    for(int i=1; i<=e; i++)
    {
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    int cc=0;

    //count num of connected graph
    for(int i=1; i<=n; i++)
    {
        if(vis[i]==0) //if(!vis[i])
        {
            dfs(i);
            cc++;
        }

    }


    cout << cc <<endl;

    return 0;

}


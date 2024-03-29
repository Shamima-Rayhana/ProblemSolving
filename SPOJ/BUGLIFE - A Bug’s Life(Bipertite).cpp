#include<bits/stdc++.h>

using namespace std;

vector<int>ar[2001];
int vis[2001];
int col[2001];

bool dfs(int node, int c)
{
    vis[node] = 1;
    col[node] = c;
    for(int i=0; i<ar[node].size(); i++)
    {
        int child = ar[node][i];
        if(vis[child] == 0)
        {
            bool res = dfs(child, c^1);
            if(res == false)
                return false;
        }
        else if(col[node] == col[child])
            return false;
    }
    return true;
}

int main()
{
    int tc;
    cin>>tc;
    int n,m, a, b;
    for(int j=1; j<=tc; j++)
    {

        cin>>n>>m;
        for(int i=1; i<=n; i++)
        {
            ar[i].clear();
            vis[i] = 0;
        }
        for(int i=1;i<=m; i++)
        {
            cin>>a>>b;
            ar[a].push_back(b);
            ar[b].push_back(a);
        }

        bool flag = true;

        for(int i=1; i<=n; i++)
        {
            if(vis[i] == 0)
            {
                bool result = dfs(i, 0);
                if(result == false)
                    flag = false;
            }
        }
        cout<<"Scenario #"<<j<<":"<<endl;

        if(flag == false)
            cout<<"Suspicious bugs found!"<<endl;
        else
            cout<<"No suspicious bugs found!"<<endl;
    }
    return 0;

}


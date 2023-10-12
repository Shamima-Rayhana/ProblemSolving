void solve()
{
    ll n, p;
    cin >> n >> p;
    ll ar[n + 2], cst[n + 2];
    vector<pair<ll, ll>> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int j = 0; j < n; j++)
        cin >> cst[j];
    for (int i = 0; i < n; i++)
    {
        vec.pb({cst[i], ar[i]});
    }

    ll res = p;
    ll lagbe = n - 1;
    vec.pb({p, 1000000000});
    sort(all(vec));
    for (int i = 0; i < vec.size(); i++)
    {
        ll jabe = min(lagbe, vec[i].second);
        lagbe -= jabe;
        res += (jabe * (vec[i].first));
    }

    cout << res << endl;
}

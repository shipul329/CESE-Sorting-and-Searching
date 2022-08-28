#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define for0(i, n) for(int i=0; i<n; i++)
#define all(v) v.begin(),v.end()
#define nn '\n'


void solve()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll> > v;

    for0(i, n)
    {
        ll x, y;
        cin >> x >> y;

        v.push_back({y, x});
    }

    sort(all(v));

    ll cnt=0, tmp=0;

    for(auto it:v)
    {
        if(it.second>=tmp)
        {
            cnt++;
            tmp=it.first;
        }
    }

    cout << cnt << nn;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif

    solve();

    return 0;
}

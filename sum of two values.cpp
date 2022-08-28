#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define for0(i, n) for(int i=0; i<n; i++)
#define all(v) v.begin(),v.end()
#define nn '\n'


void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<pair<ll, ll> > v;

    for0(i, n)
    {
        ll x;
        cin >> x;

        v.push_back({x, i+1});
    }

    sort(all(v));

    ll i=0, j=n-1;

    while(i<j)
    {
        if(v[i].first+v[j].first==k)
        {
            cout << v[j].second << " " << v[i].second << nn;
            return;
        }

        else if(v[i].first+v[j].first<k) i++;

        else if(v[i].first+v[j].first>k) j--;
    }

    cout << "IMPOSSIBLE" << nn;

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

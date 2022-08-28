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

    vector<ll>v(n);

    for0(i, n)
    cin >> v[i];

    sort(all(v));

    ll i, j, cnt=0;

    for(i=0, j=n-1; i<j; j--)
    {
        if(v[i]+v[j]<=k)i++;

        cnt++;
    }

    if(i==j) cnt++;

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

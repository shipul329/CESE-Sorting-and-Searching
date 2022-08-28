#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define for0(i, n) for(int i=0; i<n; i++)
#define nn '\n'


void solve()
{
    ll n;
    cin >> n;

    set<ll>st;

    for0(i, n)
    {
        ll x;
        cin >> x;

        st.insert(x);
    }

    cout << st.size() << nn;
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

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define for0(i, n) for(int i=0; i<n; i++)
#define all(v) v.begin(),v.end()
#define nn '\n'


void solve()
{
    ll n, m;
    cin >> n >> m;

    multiset<ll>st;

    for0(i, n)
    {
        ll x;
        cin >> x;

        st.insert(-x);
    }

    for0(i, m)
    {
        ll x;
        cin >> x;

        auto it=st.lower_bound(-x);

        if(it==st.end())
        cout << -1 << nn;

        else{
            cout << -*it << nn;
            st.erase(it);
        }
    }
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

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

    ll a[n], b[n];

    for0(i, n)
    {
        ll x, y;
        cin >> x >> y;

        a[i]=x;
        b[i]=y;
    }

    sort(a, a+n);
    sort(b, b+n);

    ll x=0, y=0, mx=0, cnt=0;

    while(x<n)
    {
        if(a[x] < b[y])
        {
            cnt++;
            x++;
        }

        else{
            cnt--;
            y++;
        }

        mx=max(mx, cnt);
    }

    cout << mx << nn;
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

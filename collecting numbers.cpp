#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define for0(i, n) for(int i=0; i<n; i++)
#define all(v) v.begin(),v.end()
#define nn '\n'
 
const ll mx=2e5+5;
ll dp[mx];
 
void solve()
{
    ll n;
    cin >> n;

    ll a[n+1];

    for(int i=1; i<=n; i++)
    {
        ll x;
        cin >> x;

        a[x]=i;
    }  

    int cnt=1, rs=1;

    for(int i=1; i<=n; i++)
    {
        if(rs > a[i])
        {
            cnt++;
        }

        rs=a[i];
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
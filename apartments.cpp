#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define for0(i, n) for(int i=0; i<n; i++)
#define all(v) v.begin(),v.end()
#define nn '\n'
 
 
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
 
    ll ans=0;
 
    vector<ll>v(n), v2(m);
 
    for0(i, n)
    cin >> v[i];
 
    for0(i, m)
    cin >> v2[i];
 
    sort(all(v));
    sort(all(v2));
 
    for(int i=0, j=0; i<n; i++)
    {
        while(j<m && v2[j]<v[i]-k) j++;
 
        if(j<m && v2[j]<= v[i]+k) ans++, j++;
    }
 
    cout << ans << nn;
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
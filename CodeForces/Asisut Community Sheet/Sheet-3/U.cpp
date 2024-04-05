#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n,m,cnt=0;cin>>n>>m;
    ll arr[n],b[m];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<m;i++){
      cout<<b[i];nl;
      cnt=lower_bound(arr+cnt,arr+n,b[i])-arr;
      cout<<cnt;nl;
      if(binary_search(arr+cnt,arr+n,b[i])==false){cout<<"NO";return;}
    }
    cout<<"YES";nl;
}
int main(){
    fast;
 solve();
}


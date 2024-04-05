#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,m,l,r;
  cin>>n>>m;
  ll a[n],b[n+1];
  for(int i=0;i<n;i++){cin>>a[i];}
  b[0]=0;
  for(int i=1;i<=n;i++){b[i]=b[i-1]+a[i-1];}

  while(m--){
    cin>>l>>r;
    cout<<b[r]-b[l-1];nl;
  }
}
int main(){
    fast;
 solve();
}

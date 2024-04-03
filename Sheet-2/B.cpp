#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,cnt=0;cin>>n;
  for(int i=1;i<=n;i++){
    if(i%2==0){cnt++;cout<<i;nl;}
  }
  if(cnt==0) cout<<-1;
}
int main(){
    fast;
 solve();
}

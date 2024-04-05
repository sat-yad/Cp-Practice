#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
int sum(int n){
  int cnt=0;
  while(n){
    int d=n%10;
    cnt+=d;
    n/=10;
  }
  return cnt;
}
void solve() {
  ll n,a,b;cin>>n>>a>>b;
  ll ans=0;
  for(ll i=1;i<=n;i++){
    int num=sum(i);
    // cout<<num;nl;
    if(num >=a && num<=b){
      // cout<<i<<" ";
      ans+=i;
    } 
  }
  // nl;
  cout<<ans;nl;
}
int main(){
    fast;
 solve();
}

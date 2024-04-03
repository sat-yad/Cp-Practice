#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n;cin>>n;
  if(n>=2){cout<<2<<" ";}
  for(ll i=3;i<=n;i+=2){
    if(i%2!=0){
      bool flag=1;
      for(ll j=2;j*j<=i;j++){
        if(i%j==0){
          flag=0;
        }
      }
      if(flag==1) cout<<i<<" ";
    }
  }
}
int main(){
    fast;
 solve();
}

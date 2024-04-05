#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif

bool check(ll x,ll y,ll n) {
  return ((x*x+y*y)%n==0);
}
void solve() {
  ll n;cin>>n;
  // ll a=sqrt(n);
  // cout<<a<< " " <<sqrt(n-a*a);
  // ll b=sqrt(n-a*a);
  // if(((a*a) + (b*b) )%n==0) cout<<a<< " " <<sqrt(n-a*a);
  // else cout<<"No solutions";
  // bool found=true;
  // for(ll i=0;i<n && !found;i++){
  //   for (ll j=0;j<n && !found;j++){
  //     if(check(i,j,n)){
  //       cout<<i<<" "<<j;
  //       found=true;
  //     }
  //   }
  // }
  // if(!found) cout<<-1;
  cout<<0<< " "<<0 ;
  nl;
}
int main(){
    fast;
 solve();
}

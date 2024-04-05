#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,a,mx=0;cin>>n;
  fl(0,n){
    cin>>a;ll cnt=0;
    while(a){
      if(a%2==0) cnt++;
      else break;
      a/=2;
    }
    mx=max(mx,cnt);
  }
  cout<<mx;nl;
}
int main(){
    fast;
 solve();
}

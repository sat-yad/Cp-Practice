#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll a,b,c;
  cin>>a>>b>>c;
  ll x=min({a,b,c});
  a-=x,b-=x,c-=x;
  if(c==0) cout<<x;
  else if(a!=0 & b!=0 & c!=0){
    int y=min({a/2,b,c});
    a-=y*2;
    b-=y,c-=y;
    x+=y;
    if(a==0 || a==1 || c==0) cout<<x;
    else if(b==0) cout<<x+min(a/2,c);
  }
  else cout<<x+min(a/2,c);
  // cout<<min({a,b,c});
}
int main(){
    fast;
 solve();
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll a,b,c,d;cin>>a>>b>>c>>d;
  a=a%100;
   b=b%100;
   c=c%100;
   d=d%100;
   ll out=a*b*c*d;
  out=out%100;
  if(out<10) cout<<0<<out<<endl;
  else cout<<out<<endl;
}
int main(){
    fast;
 solve();
}

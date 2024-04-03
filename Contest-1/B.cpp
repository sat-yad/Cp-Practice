#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll a,b,k;cin>>a>>b>>k;
  if(a%k==0 && b%k==0){cout<<"Both";}
  else if(a%k==0 && b%k!=0){cout<<"Memo";}
  else if(a%k!=0 && b%k==0){cout<<"Momo";}
  else cout<<"No One";
  nl;
}
int main(){
    fast;
 solve();
}

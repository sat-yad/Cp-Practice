#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n,mn=INT_MAX,ind=0,a;cin>>n;
  for(ll i=0;i<n;i++){
    cin>>a;
    if(a<mn) {mn=a;ind=i;}
  }
  cout<<mn<<" "<<ind+1;nl;
}
int main(){
    fast;
 solve();
}

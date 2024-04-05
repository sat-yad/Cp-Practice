#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n;cin>>n;
  ll a[n],b[n];
  unordered_set<int> s;
  for(int i=0;i<n;i++){cin>>a[i];s.insert(a[i]);}
  for(int i=0;i<n;i++){cin>>b[i];if(s.find(b[i])==s.end()) {cout<<"no";return;}}
  cout<<"yes";
  // else cout<<"no";
}
int main(){
    fast;
 solve();
}

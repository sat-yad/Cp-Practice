#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 ll n,m,a;
 cin>>n>>m;
 ll arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
 sort(arr,arr+n);
 while(m--){
  cin>>a;
  binary_search(arr,arr+n,a);
  // cout<<check;nl;
  if(binary_search(arr,arr+n,a)) cout<<"found";
  else cout<<"not found";
  nl;
 }
}
int main(){
    fast;
 solve();
}

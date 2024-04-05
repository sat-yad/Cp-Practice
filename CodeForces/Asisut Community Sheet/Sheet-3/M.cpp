#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  ll n;cin>>n;
  ll a[n];
  ll ind1,ind2,mn=INT_MAX,mx=INT_MIN;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(mx<a[i]){mx=a[i];ind1=i;}
    if(mn>a[i]){mn=a[i];ind2=i;}
  }
  swap(a[ind1],a[ind2]);
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int main(){
    fast;
 solve();
}

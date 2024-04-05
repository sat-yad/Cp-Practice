#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
ll fibo[100];
void solve() {
  ll n;cin>>n;
  cout<<fibo[n];
}
int main(){
    fast;
    fibo[0]=0;
    fibo[1]=0;
    fibo[2]=1;
    for(int i=3;i<=51;i++){
      fibo[i]=fibo[i-1]+fibo[i-2];
    }
  solve();
}

  #include <bits/stdc++.h>
  using namespace std;
  #define ll long long
  #define fl(w,x) for(ll i=w;i<x;i++)
  #define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
  #define nl cout<<"\n";
  #define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
  void solve() {
    int n;cin>>n;
    int sp=n-1;
    for(int i=1;i<=n;i++){
      for(int j=n;j>i;j--){cout<<' ';}
      for(int j=0;j<2*i-1;j++){cout<<'*';}
      nl;
    }
    for(int i=n;i>0;i--){
      for(int j=n;j>i;j--){cout<<' ';}
      for(int j=0;j<2*i-1;j++){cout<<'*';}
      nl;
    }

  }
  int main(){
      fast;
  solve();
  }

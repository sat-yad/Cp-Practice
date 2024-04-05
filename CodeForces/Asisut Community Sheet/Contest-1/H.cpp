  #include <bits/stdc++.h>
  using namespace std;
  #define ll long long
  #define fl(w,x) for(ll i=w;i<x;i++)
  #define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
  #define nl cout<<"\n";
  #define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
  void solve() {
    ll n,k,a;cin>>n>>k>>a;
    ll y=(n*k);
    double x=(n*k)/a;
    // double z=x-floor(x);
    // if(x<=2147483647 && z==0) cout<<"int";
    // else if(x>2147483647 && z==0) cout<<"long long";
    // else cout<<"double";
    if(y%a!=0) cout<<"double";
    else if(x<=2147483647) cout<<"int";
    else cout<<"long long";
   
  }
  int main(){
      fast;
  solve();
  }

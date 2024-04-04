#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int a ,b;cin>>a>>b;
  // if(abs(a-b)>1 ) cout<<"NO";
  // else cout<<"YES";
  // 
  // if((a%2)==1 && (b%2)==0) cout<<"YES";
  // else cout<<"NO";
  // if((b%a==1 || a%b==1) && (b%a!=0 && a%b!=0)) cout<<"YES";
  // else cout<<"NO";
  if(a==0 && b==0) cout<<"NO";
  else if(abs(a-b)>1) cout<<"NO";
  else cout<<"YES";
  nl;
}
int main(){
    fast;
 solve();
}

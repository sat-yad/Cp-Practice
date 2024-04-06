#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int a,b,cnt=0;
  string s;
  cin>>a>>b;
  cin>>s;
  // cout<<s[a];nl;
  if(s[a]!='-' || s.length()!=(a+b+1)){cout<<"No";return;}
  else{
    for(int i=0;i<s.length();i++){
      if((i!=a) && (s[i]>='0' && s[i]<='9')) continue;
      else {cnt++;}
    }
    if(cnt<=1)cout<<"Yes";
    else cout<<"No";
    nl;
  }

}
int main(){
    fast;
 solve();
}

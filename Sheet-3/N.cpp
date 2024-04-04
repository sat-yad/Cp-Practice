#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int a,b;
  string s;
  cin>>a>>b;
  cin>>s;
  if(s[a]!='-'){cout<<"No";return;}
  else{
    for(int i=0;i<s.length();i++){
      if((s[i]<='0' && s[i]>='9')  && s[a]=='-') ;
    }
    cout<<"Yes";
    nl;
  }

}
int main(){
    fast;
 solve();
}

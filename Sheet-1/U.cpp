#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  string str;cin>>str;
  int cnt=0;
  for(int i=0;i<str.length();i++){
    if(str[i]=='.') {cnt=i;break;}
  }
  string s1=str.substr(0,cnt);
  int n1=stoi(s1);
  string s2=str.substr(cnt+1);
  int n2=stoi(s2);
  if(n2>0) cout<<"float"<<" "<<n1<<" "<<"0."<<s2<<endl;
  else cout<<"int"<<" "<<s1<<endl;
}
int main(){
    fast;
 solve();
}

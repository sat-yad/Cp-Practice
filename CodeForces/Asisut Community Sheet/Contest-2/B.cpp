#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int a;cin>>a;
  for(int i=0;i<a;i++){
    int cnt=a-i-1;
    for(int j=0;j<a;j++){
      if(j==i && i!=(a/2)) cout<<"\\";
      else if(j==(a-1-i) && j!=(a/2)) cout<<'/';
      else if(j==(a/2) && i==(a/2)) cout<<'X';
      else cout<<'*';
    }
    // cnt++;
    nl;
  }

}
int main(){
    fast;
 solve();
}

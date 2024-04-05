#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  int n;cin>>n;
  int n1=n/10;;int n2=n%10;
  if(n1==0 || n2==0) cout<<"YES";
  else if((n1%n2==0) || (n2%n1==0)) cout<<"YES";
  else cout<<"NO";
  nl;

}
int main(){
    fast;
 solve();
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  double a,b;cin>>a>>b;
  int flr=floor(a/b);
  int cel=ceil(a/b);
  int r=round(a/b);
  cout<<"floor "<<a<<" / "<<b<<" = "<<flr;nl;
  cout<<"ceil "<<a<<" / "<<b<<" = "<<cel;nl;
  cout<<"round "<<a<<" / "<<b<<" = "<<r;nl;
  }
int main(){
    fast;
 solve();
}

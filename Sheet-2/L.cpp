#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve() {
  int a,b;cin>>a>>b;
  cout<<gcd(a,b);nl;
}
int main(){
    fast;
 solve();
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
    ll n,a,even=0,odd=0,pos=0,neg=0,zero=0;cin>>n;
    while(n--){
      cin>>a;
      if(a%2==0) even++;
      else odd++;
      if(a>0) pos++;
      else if(a==0) zero++;
      else neg++;
    }
    cout<< "Even: "<<even;nl;
    cout<< "Odd: "<<odd;nl;
    cout<< "Positive: "<<pos;nl;
    cout<< "Negative: "<<neg;nl;
}
int main(){
    fast;
 solve();
}

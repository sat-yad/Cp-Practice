#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
vector<int> fibo(60);
void solve() {
  int n;cin>>n;
  fl(0,n) cout<<fibo[i]<<" ";
  nl;
}
int main(){
    fast;
    fibo[0]==0,fibo[1]=1;
    fl(2,60){fibo[i]=fibo[i-1]+fibo[i-2];
    }
 solve();
}

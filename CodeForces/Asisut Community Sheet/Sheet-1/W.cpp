#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
 int a,b,c;char ch1,ch2;
  cin>>a>>ch1>>b>>ch2>>c;
  if(ch1=='+'){
    if(a+b==c){cout<<"Yes"<<endl;return;}
    else cout<<a+b<<endl;return;
  }
  else if(ch1=='-'){
    if(a-b==c){cout<<"Yes"<<endl;return;}
    else cout<<a-b<<endl;return;
  }
  else if(ch1=='*'){
    if(a*b==c){cout<<"Yes"<<endl;return;}
    else cout<<a*b<<endl;return;
  }


}
int main(){
    fast;
 solve();
}

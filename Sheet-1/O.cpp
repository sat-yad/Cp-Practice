#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
int a,b;char ch;
cin>>a>>ch>>b;
if(ch=='+') cout<<a+b<<endl;
if(ch=='-') cout<<a-b<<endl;
if(ch=='*') cout<<a*b<<endl;
if(ch=='/') cout<<a/b<<endl;

}
int main(){
    fast;
 solve();
}

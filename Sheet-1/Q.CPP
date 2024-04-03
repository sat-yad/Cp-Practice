#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif
void solve() {
  double a,b;
  // char c1,c2;
  cin>>a>>b;
  if(a>0 && b>0 ) cout<<"Q1"<<endl;
  if(a<0 && b>0 ) cout<<"Q2"<<endl;
  if(a<0 && b<0 ) cout<<"Q3"<<endl;
  if(a>0 && b<0 ) cout<<"Q4"<<endl;
  if(a==0.0 && b==0.0) cout<<"Origem"<<endl;
  else if(a==0.0) cout<<"Eixo Y"<<endl;
  else if(b==0.0 ) cout<<"Eixo X"<<endl;

}   
int main(){
    fast;
 solve();
}

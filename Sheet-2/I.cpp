#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(w,x) for(ll i=w;i<x;i++)
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
#define nl cout<<"\n";
#define onjudge  #ifndef ONLINE_JUDGE freopen("./input.txt", "r", stdin); freopen("./output.txt", "w", stdout);#endif


  int isPalindrome(string s){
	  int n=s.length();
	  for(int i=0;i<n/2;i++){
	    if(s[i]!=s[n-1-i]) return 0;
	  }
	return 1;
	}
void solve() {
  string s;cin>>s;
  reverse(s.begin(),s.end());
  int cnt=0;
  if(s[0]=='0'){
    for(int i=1;i<s.length();i++){
      if(s[i]!='0'){cnt=i;break;}
    }
  }
  string str=s.substr(cnt);
  cout<<str;nl;
  if(isPalindrome(s)) cout<<"YES";
  else cout<<"NO";
  nl;
}
int main(){
    fast;
 solve();
}

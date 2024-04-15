#include <bits/stdc++.h>
using namespace std;
#define ll               long long
#define uin              unsigned int
#define ull              unsigned long long
#define ld               long double 
#define fl(i,w,n)        for(ll i=w;i<n;i++)
#define rfl(i,w,n)       for(ll i=w;i>=n;i--)
#define  F              first
#define  S             second
#define  B              begin()
#define  E               end()
#define EB               emplace_back
#define PB               push_back
// #define P                pop()
#define PRES(c,x)        ((c).find(x)!=(c).end())
#define all(x)           x.begin(), x.end()
typedef vector<string>   vs;
typedef pair<int,int>    pii;
typedef pair<ll,ll>      pll;
typedef vector<int>      vi;
typedef vector<ll>       vl;
typedef vector<vi>       vvi;
typedef vector<vl>       vvl;
typedef vector<pii>      vpii;
typedef vector<pll>      vpll;
#define um(x, y)          unordered_map<x, y>
#define us(x)             unordered_set<x>
// #define mp                  map ii 
#define mpl                 map lii
#define mem1(a)                memset(a,-1,sizeof(a))
#define mem0(a)                memset(a,0,sizeof(a))
#define sum(a)          ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)         (*min_element((a).begin(), (a).end()))
#define maxe(a)         (*max_element((a).begin(), (a).end()))
#define mini(a)         ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)          ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x)      ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x)      ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define nl               <<"\n";
#define nll              cout<<"\n";
#define Yes              cout<<"Yes"<<"\n";
#define No               cout<<"No"<<"\n";
#define PI               3.1415926535897932384626
#define SET(n)           cout << fixed << setprecision(n)
#define get(s)              getline(cin, s)
#define ppc                 __builtin_popcount
#define ppcll               __builtin_popcountll
#define clz                 __builtin_clz   
#define clzll               __builtin_clzll
#define ctz                 __builtin_ctz
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
const ll mod=1000000007;
void onjudge(){
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif
}
// vl v(1000001,0);
bool check(ll mid,ll arr[],ll x){
    if(arr[mid]==x) return 1;
    return 0;
}
void solve() {
   ll n,cnt2=0,cnt3=0;cin>>n;
   while(n%2==0){
    cnt2++;
    n/=2;
   }
   while(n%3==0){
    cnt3++;
    n/=3;
   }
    if(n>1) cout<<-1;
    else if(cnt3>=cnt2 ) cout<<cnt3+cnt3-cnt2;
    else cout<<-1;
    nll;
}
int main(){

    fast;
    // vl v(1000001,0);
    //  fl(i,1,1000001){
    //     for(ll j=i;j<=1000000;j+=i){
    //         v[j]++;
    //     }
    // }
ll t;
cin>>t;
   
while(t--){
 solve();
}
}

// C:\Users\Asus\AppData\Roaming\Sublime Text\Packages\User
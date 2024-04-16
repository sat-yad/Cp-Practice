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
ll n,t;
bool check(ll mid,ll arr[],ll x){
    ll left=0,assigned=0;
    fl(i,0,n){
        if(left>=arr[i]) left-=arr[i];
        else {
            assigned++;
            if(assigned>x) return 0;
            left=mid;
            if(left>=arr[i]) left-=arr[i];
            else return 0;
        }
    }   
    return 1;
}

void solve() {
    // cin>>n>>t;
    // ll a[n];
    // ll mn=0;
    // fl(i,0,n){
    //     cin>>a[i];
    //     mn+=a[i];
    // }
    // ll l=0,h=mn,ans=-1;
    // while(l<=h){
    //     ll mid=l+(h-l)/2;
    //     if(check(mid,a,t)){
    //         ans=mid;
    //         h=mid-1;
    //     }
    //     else l=mid+1;
    // }
    // cout<<ans;
    // nll;


    cin>>n;
    ll a[n],b[n];
    fl(i,0,n){
        cin>>a[i];
    }
    b[0]=a[0];
    fl(i,1,n){
        b[i]=b[i-1]+a[i];
    }
    cin>>t;
    ll x;
    while(t--){
        cin>>x;
        int ans=lower_bound(b,b+n,x)-b;
        cout<<ans+1;nll;
    }


}
int main(){

    fast;
    // vl v(1000001,0);
    //  fl(i,1,1000001){
    //     for(ll j=i;j<=1000000;j+=i){
    //         v[j]++;
    //     }
    // }
ll t=1;
// cin>>t;
   
while(t--){
 solve();
}
}

// C:\Users\Asus\AppData\Roaming\Sublime Text\Packages\User

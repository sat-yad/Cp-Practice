#include <bits/stdc++.h>
using namespace std;
#define ll               long long
// typedef long long ll;
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
// ll fact(ll n){
//     ll result=1,i;
//     for (i=2;i<=n;i++) {
//         result*=i;
//     }
//     return result;
// }
// bool check(ll mid,ll arr[],ll x){
//     ll left=0,assigned=0;
//     fl(i,0,n){
//         if(left>=arr[i]) left-=arr[i];
//         else {
//             assigned++;
//             if(assigned>x) return 0;
//             left=mid;
//             if(left>=arr[i]) left-=arr[i];
//             else return 0;
//         }
//     }   
//     return 1;
// }


// ll run(ll ind,ll a[],ll sum1,ll sum2,ll n){

//     if(ind==n) return abs(sum1-sum2);

//     ll select=run(ind+1,a,sum1+a[ind],sum2,n);

//     ll notselect=run(ind+1,a,sum1,sum2+a[ind],n);

//     return min(select,notselect);
// }

// vl div;
// vector<ll> divisor(ll n){
//     vl ans;

// }
// vector<bool> prime;
// // vl fact;
// bool prime(ll n){
//     prime.resize(n+1);
//     prime[0]=prime[1]=false;
//     for(ll i=2;i*i<=n;i++){
//         if(prime[i]){
//             for(ll j=i*i;j<=n;j+=i){
//                 prime[j]=false;
//             }
//         }
//     }
// }
vl facz(ll n){
    vl ans;
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            // cout<<i<<" ";
            // nll;
            ans.push_back(i);
            n/=i;
        }
    }
    if(n!=1) ans.push_back(n);
    // for(auto i:ans) cout<<ans[i]<<" ";
        // nll;
    return ans;
}
void solve() {
      ll n;cin>>n;
        if(n%2==1 || n<4){
                cout<<"-1";
                nll;
        }
        else{
            ll maxval=n/4;
            ll minval=n/6;
            if(n%6!=0) minval++;
            cout<<minval<<" "<<maxval;
            nll;
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
ll t;
cin>>t;
   
while(t--){
 solve();
}
}

// C:\Users\Asus\AppData\Roaming\Sublime Text\Packages\User



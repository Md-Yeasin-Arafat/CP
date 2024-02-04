#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
// #define mod 1e9+7
#define N 10000006
#define all(x) (x).begin(), (x).end()
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
// cout<<fixed<<setprecession(8)<<ans<<endl;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree<
ll,
null_type,
less<ll>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

bool isPerfectSquare(long long n)
{
    double root = sqrt(n);
    return floor(root) == root;
}
const int mx = 2e5 + 12;

// Coding starts from here...
const ll mod=1e9+7;
ll solve(ll base, ll power, ll m){
    ll ans=1LL;
    while(power){
        if(power&1){
            ans= ((__int128)ans*base)%m;
            power--;
        }
        else{
            base=((__int128)base*base)%m;
            power/=2;
        }
    }

    return ans%m;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;cin>>t;
    while(t--){
        ll a,b,n;cin>>a>>b>>n;

        ll x=abs(a-b);
        if(x==0){
            a=solve(a,n,mod);
            b=solve(b,n,mod);

            cout<<(a+b)%mod<<endl;
            continue;
        }

        a=solve(a,n,x);
        b=solve(b,n,x);
        ll g=(a+b)%x;
        g=__gcd(g,x);
        g%=mod;
        cout<<g<<endl;


   }


    return 0;
}
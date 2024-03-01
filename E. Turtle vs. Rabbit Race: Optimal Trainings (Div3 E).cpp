#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1e9 + 7
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
const int mx = 2e6 + 12;
// Coding starts from here...



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
      ll n;cin>>n;
      ll a[n+1],b[n+1];
      b[0]=0;

      for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=b[i-1]+a[i];
      }


      ll q;cin>>q;
      while(q--){
        ll l,u;cin>>l>>u;

        int id=lower_bound(b,b+1+n,u+b[l-1])-b;
        if(id>n)id--;

        ll sum1=(1ll*u*(u+1))/2ll;
        ll x = u- (b[id]-b[l-1]);
        sum1-=(1ll * x * (x+1))/2ll;

        if(id-1>=l){
            ll sum2= (1ll * u * (u+1))/2ll;
            x = u - (b[id-1] - b[l-1]);
            sum2-= (1ll * x*(x+1))/2ll;

            if(sum2>=sum1)cout<<id-1<<" ";
            else cout<<id<<" ";
        }
        else cout<<id<<" ";


      }cout<<endl;



    }


    return 0;
}
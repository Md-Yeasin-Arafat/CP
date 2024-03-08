#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 1e9 + 7
#define N 1000
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

    string s;cin>>s;
    ll ans=0,sz=s.size();
    for(int i=1,len=1,cnt=1;i<=sz;i++){
        if(i==sz || s[i]!=s[i-1]){
            ans+=(cnt-1)+(len>1);
            len=1;
            cnt++;
        }
        else len++;

    }

    for(int i=0;i+1<sz;){
        if(s[i]==s[i+1]){
            i++;
            continue;
        }

        int len=2;
        while(i+len<sz && s[i+len]==s[i+(len%2)])len++;
        ans-=(len-2);
        i+=(len-1);
    }

    cout<<ans<<endl;















    // int t;cin>>t;
    // while(t--){

    // }

    return 0;
}
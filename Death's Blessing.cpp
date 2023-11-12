#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ull unsigned long long int
#define fw(i,a,n) for(ll i=a;i<n;i++)
#define bw(i,n,a) for(ll i=n;i>=a;i--)
#define fwd(i,a,n,k) for(ll i=a;i<=n;i+=k)
#define bwd(i,n,a,k) for(ll i=n;i>=a;i-=k)
#define pb push_back
#define mk make_pair
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define nl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define speed ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define N 1e9
const ll N1=1e9+11;
#define pi 3.141592653589793238462643383279502884197

int main(){
    speed;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll>a(n);
        vector<ll>b(n);
        ll suma=0,sumb=0;
        fw(i,0,n){
            cin>>a[i];
            suma+=a[i];
        }
        fw(i,0,n){
            cin>>b[i];
            sumb+=b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans = suma+sumb-b[n-1];
        cout<<ans<<nl;
	}
    return 0;
}


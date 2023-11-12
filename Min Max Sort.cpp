#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ull unsigned long long int
#define fw(i,a,n) for(ll i=a;i<=n;i++)
#define bw(i,n,a) for(ll i=n;i>=a;i--)
#define fwd(i,a,n,k) for(ll i=a;i<=n;i+=k)
#define bwd(i,n,a,k) for(ll i=n;i>=a;i-=k)
#define pb push_back
#define mk make_pair
#define mem(a,b) memset(a, b, sizeof(a) )
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
    ll t,sum=0,k; cin>>t;
	while(t--){
		ll n; cin>>n;
		vector<ll>a(n+5);
		vector<ll>dp(n+5);
		fw(i,1,n) cin>>a[i];
		sum=1e18;
		bw(i,n,1){
			if(a[i]==n) dp[a[i]]=a[i];
			else dp[a[i]]=max(a[i],dp[a[i]+1]);
		}
		fw(i,1,n){
			k=max(i-1,n-dp[i]);
			sum=min(sum,k);
		}
		cout<<sum<<nl;
	}
    return 0;
}


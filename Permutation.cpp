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
    ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll v[n][n-1];
		fw(i,0,n){
			fw(j,0,n-1) cin>>v[i][j];
		}
		ll a=-1,b=-1;
		fw(i,0,n){
			ll fg=0;
			fw(k,0,n){
				if(i==k) continue;
				if(v[i][1]==v[k][0]){
					a=i; b=k; fg=1;
					break;
				}
			}
			if(fg==1) break;
		}
		cout<<v[a][0]<<" ";
		fw(i,0,n-1) cout<<v[b][i]<<" ";
		cout<<nl;
	}
    return 0;
}


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
    int t;
    cin>>t;
    while(t--){
    	int n,m; cin>>n>>m;
    	if(n%m!=0){
    		cout<<-1<<nl;
    		continue;
    	}
    	if(n==m){
    		cout<<m<<" ";
    		fw(i,2,n-1){
    			cout<<i<<" ";
    		}
    		cout<<1<<nl; continue;
    	}

    	vector<int>v(n+1);
    	v[n]=1,v[1]=m;
    	fw(i,2,n-1){
    		v[i]=i;
    		int x=m;
    		v[m]=n;
    	}
    	fw(i,2,n-1){
    		if(i%m==0 && n%i==0){
    			swap(v[i],v[m]);
    			m=i;
    		}
    	}
    	fw(i,1,n)
    	cout<<v[i]<<" ";
    	cout<<nl;
    }
    return 0;
}


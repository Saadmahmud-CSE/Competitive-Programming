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

int d[1001][1001],n,m,mp;
int dfs(int x,int y)
{
	if(d[y][x]==0) return 0;
	int sum=d[y][x];
	d[y][x]=0;
	if(x>1) sum+=dfs(x-1,y);
	if(x<m) sum+=dfs(x+1,y);
	if(y>1) sum+=dfs(x,y-1);
	if(y<n) sum+=dfs(x,y+1);
	return sum;
}
int main(){
	speed;
	int t; cin>>t;
	while(t--){
		mp=0; cin>>n>>m;
		fw(i,1,n)
			fw(j,1,m) cin>>d[i][j];
		fw(i,1,n)
		fw(j,1,m)
			mp=max(mp,dfs(j,i));
		cout<<mp<<nl;
	}
    return 0;
}

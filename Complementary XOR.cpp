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
    int t; cin>>t;
	while(t--){
	int n; cin>>n;
	string a,b; cin>>a>>b;
	int cnte=0,cntd=0;
		fw(i,0,n){
			if(a[i]==b[i]) cnte++;
			else cntd++;
		}
		if(cnte>0 && cntd>0) cout<<"NO\n";
		else{
			cout<<"YES\n";
			vector<int>v;
			if(cntd==0){
				if(a[0]==0) cout<<"0\n";
				else{
					fw(i,0,n){
						if(a[i]=='1') v.pb(i+1);
					}
					if(v.size()%2==0){
						cout<<v.size()<<nl;
						fw(i,0,v.size()) cout<<v[i]<<" "<<v[i]<<nl;
					}
					else{
						cout<<v.size()+3<<nl;
						fw(i,0,v.size()){
							cout<<v[i]<<" "<<v[i]<<nl;
						}
						cout<<"1 1"<<nl;
						cout<<2<<" "<<n<<nl;
						cout<<1<<" "<<n<<nl;
					}
				}
			}
			else{
				fw(i,0,n){
						if(a[i]=='1') v.pb(i+1);
					}
					if(v.size()%2==1){
						cout<<v.size()<<nl;
						fw(i,0,v.size()) cout<<v[i]<<" "<<v[i]<<nl;
					}
					else{
						cout<<v.size()+3<<nl;
						fw(i,0,v.size()){
							cout<<v[i]<<" "<<v[i]<<nl;
						}
						cout<<"1 1"<<nl;
						cout<<2<<" "<<n<<nl;
						cout<<1<<" "<<n<<nl;
					}
				}
			}
		}
    return 0;
}


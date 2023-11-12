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

void gear(){
	string s;cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]=='Y'){
				if(i>0&&s[i-1]!='s'){
					cout<<"NO"<<nl; return;
				}
				if(i<s.size()-1&&s[i+1]!='e'){
					cout<<"NO"<<nl; return;
				}
			}else if(s[i]=='e'){
				if(i>0&&s[i-1]!='Y'){
					cout<<"NO"<<nl; return;
				}
				if(i<s.size()-1&&s[i+1]!='s'){
					cout<<"NO"<<nl; return;
				}
			}else if(s[i]=='s'){
				if(i>0&&s[i-1]!='e'){
					cout<<"NO"<<nl; return;
				}
				if(i<s.size()-1&&s[i+1]!='Y'){
					cout<<"NO"<<nl; return;
				}
			}else{
				cout<<"NO"<<nl; return;
			}
		}
		cout<<"YES"<<nl;
}
int main(){
    speed;
    ll t; cin>>t;
    while(t--){
        gear();
    }
    return 0;
}


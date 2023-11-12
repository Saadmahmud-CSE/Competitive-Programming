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

void solve()
{
    ll n=10,m=10;
    char arr[10][10];
    ll sum=0;
    fw(i,0,n)
    {
        fw(j,0,n)
        {
            cin>>arr[i][j];
        }
    }
 
    fw(i,0,n)
    {
        fw(j,0,n)
        {
            if(arr[i][j]=='X')
            {
                ll di=min(i,9-i);
                ll dj=min(j,9-j);
                ll point=min(di,dj);
                if(point==0) sum+=1;
                else if(point==1) sum+=2;
                else if(point==2) sum+=3;
                else if(point==3) sum+=4;
                else sum+=5;
            }
        }
    }
    cout<<sum<<nl;
}
int main(){
	speed;
	ll t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

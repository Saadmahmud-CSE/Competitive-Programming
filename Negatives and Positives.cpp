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
    ll n; cin>>n;
    vector<ll>v(n);
    ll sm=0,neg=0;
    fw(i,0,n){
        cin>>v[i];
        sm+=abs(v[i]);
        if(v[i]<0) neg++;
    }
    fw(i,0,n) if(v[i]<0) v[i]=abs(v[i]);
    if(neg%2==0){
        cout<<sm<<nl;
        return;
    }
    ll mn=*min_element(v.begin(),v.end());
    cout<<sm-2*mn<<nl;
}
int main(){
    speed;
    ll t; cin>>t;
    while(t--){
        gear();
    }
    return 0;
}


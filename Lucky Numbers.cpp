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

int ctoi(char ch){
return ch-'0';
}
int luck(int n){
    string s=to_string(n);
    sort(s.begin(),s.end());
    int mn=ctoi(s.front());
    int mx=ctoi(s.back());
    return mx-mn;
}
int main(){
    speed;
    ll t; cin>>t;
    fw(i,0,t){
    	int a,b; cin>>a>>b;
        int mx=a;
        for(int j=a;j<=b;j++){
            if(luck(j)==9){
            	mx=j; break;
            }
            if (luck(mx)<luck(j)){
                mx=j;
            }
        }
        cout<<mx<<nl;
    }
    return 0;
}


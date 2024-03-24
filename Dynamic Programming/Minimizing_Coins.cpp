
// https://cses.fi/problemset/task/1634

/********** Uday Patel **********/

#include<bits/stdc++.h>
using namespace std; 
#define Speed  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
#define int long long int
#define pb push_back

#define f(var,srt,ed) for(int var=srt;var<ed;var++)
#define rf(var,srt,ed) for(int var=srt;var>ed;var--)
#define fe(val,dt) for(auto &val:dt)
#define sort(data) sort(data.begin(),data.end())
 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/(__gcd(a,b)))
 
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl


void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    f(i,0,n) cin>>v[i];
    vector<int> dp(x+1,1e9);
    dp[0]=0;
    f(i,1,x+1){
        f(j,0,n){
            if(v[j]<=i) dp[i] = min(dp[i], dp[i-v[j]]+1);
        }
    }
    cout<<(dp[x]<1e9 ? dp[x] : -1)<<endl;
}

signed main(){
    Speed;
    int t=1;
    // cin>>t;
    while(t--){
      solve();
    }
}

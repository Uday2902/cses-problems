
// https://cses.fi/problemset/task/1636/

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

int M = 1e9 + 7;


void solve(){
    
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    f(i,0,n) cin>>v[i];
    vector<vector<int>> dp(n+1, vector<int>(x+1));
    f(i,0,n) dp[i][0] = 1;
    for(int i=n-1;i>=0;i--){
        for(int sum = 1;sum<=x;sum++){
            int not_take = dp[i+1][sum];
            int take = 0;
            if(v[i]<=sum){
                take = dp[i][sum-v[i]];
            }
            dp[i][sum] = (take + not_take)%M;
        }
    }
    cout<<dp[0][x]<<endl;
}

signed main(){
    Speed;
    int t=1;
    // cin>>t;
    while(t--){
      solve();
    }
}

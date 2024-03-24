
// https://cses.fi/problemset/task/1633

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

int M = 1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<int> dp(n+1);
    dp[0]=1;
    f(i,1,n+1){
        f(j,1,7){
            if(j<=i){
                dp[i] = (dp[i] + dp[i-j]) % M;
            }
        }
    }
    cout<<dp[n]<<endl;
}

signed main(){
    Speed;
    int t=1;
    // cin>>t;
    while(t--){
      solve();
    }
}

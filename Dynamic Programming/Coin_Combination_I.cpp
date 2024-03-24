
// https://cses.fi/problemset/task/1635

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
#define M 1000000007

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    f(i,0,n) cin>>v[i];
    vector<int> dp(x+1,0);
    dp[0]=1;
    f(i,1,x+1){
        f(j,0,n){
            if(i>=v[j]){
                dp[i] = (dp[i]+dp[i-v[j]]) % M;
            }
        }
    }
    cout<<dp[x]<<endl;
}

signed main(){
    Speed;
    solve();
}

//Author:Angel Garcia 
//MrAngello: Codeforces
#include <bits/stdc++.h>
using namespace std;
#define forn(i,n,e) for(int i=e;i<n;i++)
#define fornr(i,n,e) for(int i=n-1;i>=e;i--)
#define fornpow2(i,n,e) for(int i=e;i*i<=n;i++)
#define fornpow3(i,n,e) for(int i=e;i*i*i<=n;i++)
#define ll long long
#define fornll(i,n,e) for(ll i=e;i<n;i++)
#define pii pair<int,int>
#define endl "\n";
#define pb push_back
#define pii pair<int,int>
#define pis pair<int,string>
#define pll pair<ll,ll>
#define vi vector<int>
#define vb vector<bool>
#define YES cout<<"YES"<<endl;
#define Yes cout<<"Yes"<<endl;
#define NO cout<<"NO"<<endl;
#define No cout<<"No"<<endl;
#define fast ios::sync_with_stdio(false);cin.tie(0);
#define test(t) while(t--) solve();
#define debug(s) cout<<s<<endl;
#define debuga(s) cout<<s<<" ";
#define debuge cout<<endl;
#define len(a) a.size()
#define ipt(s) cin>>s;
#define ipt2(s,p)cin>>s>>p;
#define ipt3(s,p,x)cin>>s>>p>>x;
#define prefixSum(x,n) for(int i=1;i<=n;i++) x[i]+=x[i-1];
#define cinArray(x,n,e) for(int i=e;i<n;i++) ipt(x[i]);
#define max 1e9;
//vector<int>*graph 
// void solve();
/*void debugvector(vi nums){
  forn(i,len(nums),0){
    debug(nums[i])
  }
}*/
int main(){
  fast
  ll n,x;
  ipt2(n,x)
  ll nums[n+1];  
  cinArray(nums,n+1,1)
  vector<ll> dp(x+1,1e9);
  dp[0]=0;
  forn(i,x+1,1){
    forn(j,n+1,1){
      if(i-nums[j]>=0) dp[i]=min(dp[i],dp[i-nums[j]]+1);
    }
  }
  cout<<(dp[x]==1e9?-1:dp[x])<<endl;
}
 

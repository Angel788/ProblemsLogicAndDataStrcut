//Author:Angel Garcia 
//MrAngello: Codeforces
#include <bits/stdc++.h>
using namespace std;
#define forn(i,n,e) for(int i=e;i<n;i++)
#define fornr(i,n) for(int i=n;i>0;i--)
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
#define vll vector<ll>
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
//vector<int>*graph 
// void solve();
/*void debugvector(vi nums){
  forn(i,len(nums),0){
    debug(nums[i])
  }
}*/
vector<vb>dp(1001,vb(1001,1));
string letters[1001];
ll numbers=0;
int n;
ll solve(int i, int j){
  if( i>n-1 || j>n-1 ) return 0;
  if(letters[i][j]=='*'){
    dp[i][j]=0;
    return 0;
  }
  if(i==n-1 && j==n-1) return ++numbers;
  solve(i+1,j);
  solve(i,j+1);
  return numbers;
}
int main(){
  fast
  ll mod=1e9+7;
  ipt(n)
  forn(i,n,0) cin>>letters[i];
  vector<vll>dp(n+1,vll(n+1));
  dp[0][0]=1;
  forn(i,n,0){
    forn(j,n,0){
      if(letters[i][j]=='*') continue;
      if(j>0) dp[i][j]=(dp[i][j-1]+dp[i][j])%mod;
      if(i>0) dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
  }
  }  
    debug(dp[n-1][n-1])
}

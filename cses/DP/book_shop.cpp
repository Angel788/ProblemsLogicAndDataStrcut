//Author:Angel Garcia 
//MrAngello: Codeforces
#include <bits/stdc++.h>
#include <vector>
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
int main(){
  fast
  int n,x;
  ipt2(n, x)
  ll booksPrice[n+1];
  ll booksPages[n+1];
  forn(i,n+1,1) cin>>booksPrice[i];
  forn(i,n+1,1) cin>>booksPages[i];
  vector<vll>dp(n+1,vll(x+1,0));
  forn(i,n+1,1){
    forn(j,x+1,1){
      dp[i][j]=dp[i-1][j];
      if(j>=booksPrice[i]){
        dp[i][j]=max(dp[i][j],booksPages[i]+dp[i-1][j-booksPrice[i]]);
      }
    }
  }
  debug(dp[n][x]);
}

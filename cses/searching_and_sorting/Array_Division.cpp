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
#define prefixSum(x,n,e) for(int i=e;i<=n;i++) x[i]+=x[i-1];
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
  int n,k;
  ipt2(n,k)
  ll nums[n+1];
  ll nMax;
  nums[0]=0;
  cinArray(nums,n+1,1)  
  prefixSum(nums,n,1)
  ll l=0;
  ll r=nums[n];
  int j=0;
  ll m;
  int blocks=0;
  ll ans;
  while(l<=r){
    m=(l+r)/2;
    blocks=1;
    j=0;
    forn(i,n+1,1){
      if(nums[i]-nums[i-1]>m) {
        blocks=0;
        i=n+1; 
        continue;
      }
      if(nums[i]-nums[j]>m){
        j=i-1;
        blocks++;
      }
    }
    debug(l)
    debug(r)
    debug(blocks)
    debug(m)
    debug("---------------------")
    if(blocks>k ) r=m-1;
    else l=m+1;
  }
  debug(r+1)
}

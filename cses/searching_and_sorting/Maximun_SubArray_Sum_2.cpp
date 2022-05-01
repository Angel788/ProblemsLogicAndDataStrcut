//Author:Angel Garcia 
//MrAngello: Codeforces
#include <bits/stdc++.h>
using namespace std;
#define forn(i,n,e) for(int i=e;i<n;i++)
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
//vector<int>*graph 
// void solve();
/*void debugvector(vi nums){
  forn(i,len(nums),0){
    debug(nums[i])
  }
}*/
/*void zAlgorithm(string str, int Z[])
{
    int n = str.length();
    int L, R, k;
    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i > R)
        {
            L = R = i;
            while (R<n && str[R-L] == str[R])
                R++;
            Z[i] = R-L;
            R--;
        }
        else
        {
            k = i-L;
            if (Z[k] < R-i+1)
                Z[i] = Z[k];
            else
            {
                while (R<n && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
        }
    }
}*/
int main(){
  fast
  int n,a,b;
  ipt3(n,a,b)
  vector<ll> nums(n+1);
  fornll(i,n+1,1) ipt(nums[i])
  vector<ll> prefixSum(n+1);
  prefixSum[0]=0;
  fornll(i,n+1,1)prefixSum[i]+=prefixSum[i-1]+nums[i];
  ll sum=0,maxsum=-1e18;
  set<pair<ll,int>>Subarray;
  forn(i,b+1,a) Subarray.insert({prefixSum[i],i});
  fornll(i,n-a+2,1){
    maxsum=max(maxsum,Subarray.rbegin()->first-prefixSum[i-1]);
    Subarray.erase({prefixSum[a+i-1],a+i-1});
    if(b+i<=n){
      Subarray.insert({prefixSum[b+i],b+i});
    }
  }
    debug(maxsum)
} 

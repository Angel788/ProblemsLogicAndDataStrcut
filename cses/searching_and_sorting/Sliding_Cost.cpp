//Author:Angel Garcia 
//MrAngello: Codeforces
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set= tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
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
  int n,k;
  ipt2(n,k)
  int nums[n];  
  forn(i,n,0) ipt(nums[i])
    if(k==1){
      forn(i,n,0) debuga("0")
        debuge
        return 0;
    }
  if(k==2){
    forn(i,n,1)debuga(abs(nums[i]-nums[i-1]))
      debuge
      return 0;
  }
  ordered_set<pii> subArray;
  ll sum=0;
  forn(i,k,0){ 
    subArray.insert({nums[i],i});
    sum+=nums[i];
  }
  debug(sum)
  ll median=subArray.find_by_order((k-1)/2)->first;
  debug(median)
  debug(len(subArray))
  debuga(sum-median*len(subArray))
  forn(i,n-k+1,1){
    subArray.erase({nums[i-1],i-1});
    subArray.insert({nums[i+k-1],i+k-1});
    sum-=nums[i-1];
    sum+=nums[i+k-1];
     median=subArray.find_by_order((k-1)/2)->first;
    debuga(sum-median*len(subArray))
  }
  debuge
}

//Author:Angel Garcia
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
int main(){
  fast
  int n;
  ipt(n)
  int num;
  vi even;
  vi odd;
  forn(i,n,0){
    ipt(num)
      if(num%2){
        odd.pb(num);
      }
      else even.pb(num);
  }
  sort(even.begin(),even.end(),greater<int>());
  sort(odd.begin(),odd.end(),greater<int>());
  ll maxEven=-10e4,coutEven=0;
  if(even.size()==0){
    maxEven=0;
  }
  else{
  forn(i,even.size(),0){
    coutEven+=even[i];
    maxEven=max(maxEven,coutEven);
  }
  }
  ll maxOdd=-10e4,maxTOdd=0;
  forn(i,odd.size(),0){
    maxTOdd+=odd[i];
    if(maxTOdd%2){
      maxOdd=max(maxOdd,maxTOdd);
    }
  }
  if(maxEven<0){
    maxEven=0;
  }
  debug(maxOdd+maxEven)
}

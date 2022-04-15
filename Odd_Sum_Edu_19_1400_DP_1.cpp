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
#define inf 100000000
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
  ll num;
  ll maxEvenNeg=-inf,minEvenPos=inf,total=0;
  forn(i,n,0){
    ipt(num)
      if(num%2){
        if(num>0){
          total+=num;
          minEvenPos=min(minEvenPos,num);
        }
        else{
          maxEvenNeg=max(maxEvenNeg,num);
        }
      }
      else{
        if(num>0){
          total+=num;
        }
      }
  }
  if(!(total%2)){
    total-=min(minEvenPos,abs(maxEvenNeg));
  }
  debug(total);
}

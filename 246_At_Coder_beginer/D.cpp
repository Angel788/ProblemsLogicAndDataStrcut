//Author:Angel Garcia
#include <bits/stdc++.h>
using namespace std;
#define forn(i,n,e) for(int i=e;i<n;i++)
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
#define max 1e18
//vector<int>*graph
// void solve();
int main(){
  fast
  ll n;
  cin>>n;
  ll l,r,m=0;
  ll x=0;
  ll res=max,aux;
  for(ll i=0;i<=1e6;i++){
    l=0;r=1e6;
    while(l<=r){
      m=(l+r)/2;
      x=(i*i+m*m)*(m+i);
      if(x>=n) r=m-1;
      else l=m+1;
    }
    aux=(i*i+l*l)*(i+l);
     res=min(res,aux);
  }
  debug(res)
}


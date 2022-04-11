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
#define max 1e6
#define ipt(s) cin>>s;
//vector<int>*graph
// void solve();
int main (){
  fast
  int n;
  ipt(n);
  ll num;
  bool isprime[1000001];
  memset(isprime,true ,sizeof(isprime));
  for(ll p=2;p*p<=max;p++){
    if(isprime[p]){
      for(ll x=p*p;x<=max;x+=p){
         isprime[x]=false;
       }
    }
  }
  forn(i,n,0){
    cin>>num;
    if((int)sqrt(num)*sqrt(num)==num && isprime[(int)sqrt(num)] && num>3){ YES}
    else NO  
  }
}

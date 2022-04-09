//Author: Angel Garcia
//time O(n) memorie: O(n)
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
//vi*graph
// void solve();
// Where x is the mount of negative numbers
int main(){
  ll n;
  cin>>n;
  ll a[n];
  ll neg=0,pos=0,x=0,sump=0;
  fornll(i,n,0){
    cin>>a[i];
    if(a[i]<0){
      x=pos;
      pos=neg;
      neg=x;
    }    
    if(a[i]<0){
      neg++;
    }
    else{
      pos++;
    }
    sump+=pos;
  }
  cout<<(ll)n*(n+1)/2-sump<<" "<<sump<<endl;
}

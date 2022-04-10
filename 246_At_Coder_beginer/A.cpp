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
//vector<int>*graph
// void solve();
int main(){
  fast
  int x1,y1,x2,y2,x3,y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  if(x1==x2 && y2==y3) cout<<x3<<" "<<y1<<endl;
  if(x1==x2 && y1==y3) cout<<x3<<" "<<y2<<endl;
  if(x2==x3 && y1==y3) cout<<x1<<" "<<y2<<endl;
  if(x2==x3 && y1==y2) cout<<x1<<" "<<y3<<endl;
  if(x1==x3 && y2==y3) cout<<x2<<" "<<y1<<endl;
  if(x1==x3 && y1==y2) cout<<x2<<" "<<y3<<endl;
}

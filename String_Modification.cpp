#include <bits/stdc++.h>
using namespace std;
#define forn(i,n,e) for(int i=e;i<n;i++)
#define ll long long
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
string modificated(int n,string s,int k);
void solve();
// int n
// ll n
string modificated(int n,string s,int k){
    string prefix=s.substr(0,k-1);
    string subfix=s.substr(k-1,n);
    if(n%2==k%2) reverse(prefix.begin(),prefix.end());
    return subfix+prefix;
}
void solve(){
    int n;
    string s;
    cin>>n>>s;
    int best_k=1;
    string temp;
    string best_s=s;
    for(int i=2;i<=n;i++){
        temp=modificated(n,s,i);
        if(best_s>temp){
            best_s=temp;
            best_k=i;
        }
    }
    cout<<best_s<<"\n"<<best_k<<"\n";
}
int main(){
  fast
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}

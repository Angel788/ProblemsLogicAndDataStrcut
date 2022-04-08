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
#define test(t) while(t--)
#define debug(s) cout<<s<<endl;
//void solve()
// int n
// ll n
struct Node{
    ll l,r,n;
};
void solve(){
    int a,b;
    string s;
    cin>>a>>b>>s;
    vector<struct Node>arr;
    struct Node auxNode;
    fornll(i,s.size(),0){
        if(s[i]=='1'){
            ll aux=i;
            i++;
            while(s[i]=='1' && i<s.size()){i++;}
            auxNode.l=aux;auxNode.r=i-1;auxNode.n=1;
            arr.pb(auxNode);
            i--;
        }
        if(s[i]=='0'){
            ll aux=i;
            i++;
            while(s[i]=='0' && i<s.size()){i++;}
            auxNode.l=aux;auxNode.r=i-1;auxNode.n=0;
            arr.pb(auxNode);
            i--;
        }
    }
    ll res=0;
    if(arr.size()==1 && arr[0].n==0){res=0;}
    else{
    fornll(i,arr.size(),0){
        if(arr[i].n==1) res+=a;
        if(arr[i].n==0 &&(i!=0 && i!=arr.size()-1)){
            if((abs(arr[i].r-arr[i].l)+1)*b<a){
                res+=b*(abs(arr[i].r-arr[i].l)+1);
            i++;
            }
        }
    }
    }
    debug(res)
}
int main(){
  fast
  int t;
  cin>>t;
  test(t) solve();
}

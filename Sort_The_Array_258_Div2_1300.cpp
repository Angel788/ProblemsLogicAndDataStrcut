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
  ipt(n);
  vi a(n);
  forn(i,n,0){
    ipt(a[i])
  }
  int l=0,r=0;
  int laux=0,raux=0;
  int ant;
  int x=0;
  forn(i,n,0){
    if(i==0){
      l=0;
      r=0;
      continue;
    }
    if(a[i-1]>a[i]){
      r=i;
    }

    else{
      if(abs(l-r)>=1 && x==0){
         reverse(a.begin()+l,a.begin()+r+1);
         x++;
        laux=l;
        raux=r;
       }
      l=i;
      r=i;
    }
  }
  if(abs(l-r)>=1 && x==0){
         reverse(a.begin()+l,a.begin()+r+1);
         x++;
        laux=l;
        raux=r;
  }
  forn(i,n-1,0){
    if(a[i+1]<a[i]){
      debug("no")
      return 0;  
    }
  }
  if(x==0){
    debug("yes")
      cout<<1<<" "<<1<<endl;
    return 0;
  }

  debug("yes")
  cout<<laux+1<<" "<<raux+1<<endl;
}


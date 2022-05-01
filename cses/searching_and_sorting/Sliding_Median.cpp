//Author:Angel Garcia 
//MrAngello: Codeforces
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
      forn(i,n,0) debug("0")
    }
  if(k==2){
    debuga(abs(nums[0]-nums[1]))
    forn(i,n-1,1)debug(abs(nums[i]-nums[i+1]))
  }
  vector<pii>aux;
  forn(i,k,0) aux.pb({nums[i],i});
  sort(aux.begin(),aux.end());
  set<pii> SubArrayL;
  set<pii>SubArrayR;
  ll sumL=0,sumR=0;
  forn(i,k/2+k%2,0){
    SubArrayL.insert(aux[i]);
    sumL+=aux[i];
  }
  forn(i,k,k/2+k%2){
    SubArrayR.insert(aux[i]);
    sumR+=aux[i];
  }
  debuga(SubArrayL.rbegin()->first)
  forn(i,n-k+1,1){
    if(SubArrayL.count({nums[i-1],i-1}))
      SubArrayL.erase({nums[i-1],i-1});
    else
      SubArrayR.erase({nums[i-1],i-1});
    if(*(SubArrayL.rbegin())<make_pair(nums[k+i-1],k+i-1)){
      SubArrayR.insert({nums[k+i-1],k+i-1});
    }
    else SubArrayL.insert({nums[k+i-1],k+i-1});
    while(len(SubArrayL)<(k/2+k%2)){
      pii aux1=(*SubArrayR.begin());
      SubArrayL.insert(aux1);
      SubArrayR.erase(aux1);
    }
    while(len(SubArrayR)>(k/2+k%2)){
      pii aux1=*(SubArrayL.rbegin());
      SubArrayR.insert(aux1);
      SubArrayL.erase(aux1);
    }
    debuga(SubArrayL.rbegin()->first)
  }
  debuge
}

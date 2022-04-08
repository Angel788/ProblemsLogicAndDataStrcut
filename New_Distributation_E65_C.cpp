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
vector<int>graph[500002];
bool visited[500002];
int n;
int color=1;
int dp[500002]={0};
int siz[50002];
//void solve();
void conectGraph(int u,int v){
    graph[u].pb(v);
    graph[v].pb(u);
}
void bfs(int v){
    dp[v]=color;
    queue<int> q;
    visited[v]=true;
    q.push(v);
    int res=0;
    while(!q.empty()){
        int i=q.front();
        res++;
        q.pop();
        for(auto x:graph[i]){
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
                dp[x]=color;
            }
        }
    }
    siz[color]=res;
}

int main(){
    fast
    int m,mi,ant,num;
    cin>>n>>m;
    forn(i,m,0){
        cin>>mi;
        forn(i,mi,0){
            if(i==0){
                cin>>num;
                conectGraph(num,num);
                ant=num;
            }
            else{
               cin>>num;
               conectGraph(ant,num);
               ant=num;

            }
        }
    }
    forn(i,n+1,1){
        if(dp[i]<1){
            bfs(i);
            color++;
        }
        debuga(siz[dp[i]])
    }
    debuge
}

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
vector<int>*graph;
bool *visited;
int *dp;
int n;
//void solve();
void conectGraph(int u, v){
    graph[u].pb(v);
    graph[v].pb(u);
}
int bfs(int v){
    queue<int> q;
    visited[v]=true;
    q.push(v);
    int res=0;
    while(!q.empty()){
        int i=q.front();
        res++;
        q.pop();
        for(auto x:graph[i]){
                q.push(x);
                visited[x]=true;
        }
    }
    return res;
}

int main(){
    fast
    int m,mi,ant,num;
    cin>>n>>m;
    graph=new vector<int>[n+1];
    visited=new int [n+1];
    dp=new int[n+1];
    dp={0};
    forn(i,m,0){
        cin>>mi;
        cin>>num;
        ant=num;
        forn(i,mi,1){
            cin>>num;
            conectGraph(ant,num);
            ant=num;
        }
    }
    forn(i,n+1,1){
        debug(bfs(i));
    }
}

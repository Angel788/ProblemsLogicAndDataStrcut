#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lf double
#define forn(i,n) for(int i=0;i<n;i++)
#define tw(n) while(n--)
#define endl "\n";
#define Pairis Pair<int,string>
#define Pairii Pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
//void solve();

int main(){
    int n;
    cin>>n;
    vector<pair<ll,ll>>nums(n);
    forn(i,n) cin>>nums[i].first>>nums[i].second;
    string s;
    cin>>s;
    map<int,pair<x,pair<bool,bool>>>isposible;
    forn(i,n){
        if(s[i]=='L') isposible[nums[i].second].first=true;
        if(s[i]=='R') isposible[nums[i].second].second=true;
    }
    bool istrue=false;
    forn(i,n){
        if(isposible[nums[i].second].first==true && isposible[nums[i].second].second==true){
            istrue=true;
            break;
        }
    }
    cout<<(istrue?"YES":"NO")<<endl;
}

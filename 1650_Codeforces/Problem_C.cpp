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
class node{
    public:
    ll x;
    int w;
    int i;
};
void solve();
int main(){
    int t;
    cin>>t;
    tw(t){
        solve();
    }
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<node>nums(m);
    forn(i,m){
        cin>>nums[i].x>>nums[i].w;
        nums[i].i=i+1;
    }
    sort(nums.begin(),nums.end(),[](node a1, node b1){
        return a1.w<b1.w;
    });
    int sum=0;
    forn(i,m){
        if(i<2*n)sum+=nums[i].w;
        else nums.pop_back();
    }
    sort(nums.begin(),nums.end(),[](node a1, node b1){
        return a1.x<b1.x;
    });
    cout<<sum<<endl;
    forn(i,n){
        cout<<nums[i].i<<" "<<nums[n*2-i-1].i<<endl;
    }
}

#include <bits/stdc++.h> 
#define ll long long 
#define max 1e18
#define endl "\n";
using namespace std;
void solve();
void solve(){
    int n;
    ll h;
    cin>>n>>h;
    vector<ll>A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    ll l=1, r=max;
    while(l<=r){
        cout<<"---------------"<<endl
        cout<<l<<" "<<r<<endl;
        ll m=(l+r)/2;
        ll sum=m;
        for(int i=0;i<n-1;i++) sum+=min(m,A[i+1]-A[i]);
        if(sum>=h)r=m-1;
        else l=m+1;
        cout<<"-----"<<endl;
        cout<<l<<" "<<r<<endl;
    }
    cout<<r+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}

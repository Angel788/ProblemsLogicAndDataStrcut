#include <bits/stdc++.h>
#define rNo cout<<"NO"<<endl; return 0;
#define rYes cout<<"YES"<<endl; return 0;
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;

int main(){
    fast
    int n,t;
    cin>>n>>t;
    vector<int>A(n+1);
    for(int i=1;i<=n-1;i++) cin>>A[i];
    int y=1+A[1];
    while(y<=n-1){
        if(y==t){cout<<"YES"<<endl;return 0;}
        y=y+A[y];
    }
    if(y==t) {cout<<"YES"<<endl;return 0;}
    cout<<"NO"<<endl; return 0;
}

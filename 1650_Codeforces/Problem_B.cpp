#include <bits/stdc++.h>
#define endl "\n";
#define minI INT_MIN;
using namespace std;
void solve();
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
void solve(){
    int l,r,a;
    int aux;
    cin>>l>>r>>a;
    int maxN=(int)r/a+(r%a);
    while(true){
        if(r%a==0){
        if(r==l)break;
        aux=(int)(r-1)/a+((r-1)%a);
        maxN=max(maxN,aux);
        break;
        }
        else{
        r=(r-r%a<=l?l:r-r%a);
        aux=r/a+r%a;
        maxN=max(maxN,aux);
        if(l==r) break;
        aux=(int)(r-1)/a+((r-1)%a);
        maxN=max(maxN,aux);
        break;
        }
    }
    cout<<maxN<<endl;
}
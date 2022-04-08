#include <bits/stdc++.h>
using namespace std;
void solve();
void solve(){
    int n,m;
    cin>>n>>m;
    int mod[m]={};
   int num,pairs=0;
    for(int i=0;i<n;i++){
        cin>>num;
        mod[num%m]++;
    }
    for(int i=0;i<m;i++){
        if(i==0 && mod[i]>0) pairs++;
        else if( i*2==m && mod[i]>0) pairs++;
        else{
            if(2*i>m && (mod[i]>0 || mod[m-i]>0)){
                int x=mod[i],y=mod[m-i];
                pairs+=1+max(0,abs(x-y)-1);
            }
        }
    }
    cout<<pairs<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

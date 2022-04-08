#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
    int n;
    cin>>n;
    int t[n];
    for(int i=0;i<n;i++) cin>>t[i];
    if(n==1){ cout<<"1 0"<<endl;return 0;}
    int suml=0,sumr=0;
    int l=0,r=n-1,countl=0,countr=0;
    while(l<=r){
        if(l==r){
            if(suml<=sumr) countl++;
            else countr++;
            break;
        }
        if(suml+t[l]<=sumr+t[r]){
            countl++;
            suml+=t[l];
            l++;
        }
        else{
            countr++;
            sumr+=t[r];
            r--;
        }
    }
    cout<<countl<<" "<<countr<<endl;
}

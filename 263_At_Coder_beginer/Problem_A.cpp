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
    int V,A,B,C;
    cin>>V>>A>>B>>C;
    int i=1;
    while(V>=0){
        if(i%3==1) V-=A;
        if(i%3==2) V-=B;
        if(i%3==0) V-=C;
        if(i%3==1 && V<0) cout<<"F"<<endl;
        if(i%3==2 && V<0) cout<<"M"<<endl;
        if(i%3==0 && V<0) cout<<"T"<<endl;
        i++;
    }
}

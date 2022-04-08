#include <bits/stdc++.h>
#define forn(i,n,e) for(int e=i;e<n;e++)
#define endl "\n";
using namespace std;
struct Node{
    int x;
    int y;
    int pop;
};
bool sortPerRadius(Node a,Node b){
    return (a.x*a.x+a.y*a.y)<(b.x*b.x+b.y*b.y);
}
double dist(int x,int y){
    return sqrt(x*x+y*y);
}
int main(){
    int n,s;
    cin>>n>>s;
    vector<Node>Cities(n);
    for(int i=0;i<n;i++) cin>>Cities[i].x>>Cities[i].y>>Cities[i].pop;
    sort(Cities.begin(),Cities.end(),sortPerRadius);
    vector<int>Sum(n);
    Sum[0]=Cities[0].pop;
    for(int i=1;i<n;i++) Sum[i]=Cities[i].pop+Sum[i-1];
    int l=0,r=n-1;
    if(s==1e6){cout<<0<<endl;}
    else{
        while(l<=r){
           int m=(l+r)/2;
           int add=Sum[m]+s;
           if(add>=1e6)r=m-1;
           else l=m+1;
        }
        if(Sum[l]+s==1e6){
            double res=dist(Cities[l].x,Cities[l].y);
            printf("%.7lf\n",res);
        }
        else cout<<-1<<endl;
    }
}

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
   vector<int>A(n);
   vector<int>B(n);
   forn(i,n) cin>>A[i];
   forn(i,n) cin>>B[i];
   int sumSame=0;
   forn(i,n){
       if(A[i]==B[i])sumSame++;
   }
   int sumDiferent=0;
   forn(i,n){
       forn(e,n){
           if(A[i]==B[e] && i!=e)sumDiferent++;
       }
   }
   cout<<sumSame<<endl;
   cout<<sumDiferent<<endl;
}

#include <bits/stdc++.h>
#define endl "\n";
using namespace std;
void test();
void test(){
    string a,b;
    cin>>a;
    cin>>b;
    vector<pair<char,int>>numsA;
    vector<pair<char,int>>numsB;
    numsA.push_back(make_pair(a[0],1));
    int aux=0;
    for(int i=1;i<a.size();i++){
        if(a[i]==a[i-1]){
            int sum=1+numsA[aux].second;
            numsA[aux]=make_pair(a[i],sum);
        }
        else{
            aux++;
            numsA.push_back(make_pair(a[i],1));
        }
    }
    aux=0;
    numsB.push_back(make_pair(b[0],1));
    for(int i=1;i<b.size();i++){
        if(b[i]==b[i-1]){
            int sum=1+numsB[aux].second;
            numsB[aux]=make_pair(b[i],sum);
        }
        else{
            aux++;
            numsB.push_back(make_pair(b[i],1));
        }
    }
    if(numsA.size()!=numsB.size()){ cout<<"NO"<<endl;}
    else{
        bool istrue=true;
        for(int i=0;i<numsA.size();i++){
            if(numsA[i].first!=numsB[i].first){
                istrue=false;
                break;
            }
            if(numsA[i].second>numsB[i].second){
                istrue=false;
                break;
            }
        }
        cout<<(istrue?"YES":"NO")<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    while(n--) test();
}

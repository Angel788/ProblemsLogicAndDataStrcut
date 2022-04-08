#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
void solve();
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
void solve(){
    string s;
    cin>>s;
    string c;
    cin>>c;
    vector<int> countLetters(27);
    vector<int>pos;
    for(int i=0;i<s.size();i++){
        countLetters[s[i]-97]++;
        if(s[i]==c[0]){
           pos.push_back(i);
        }
    }
    if(countLetters[c[0]-97]==0)cout<<"NO"<<endl;
    else{
        bool isposible=false;
        for(int i=0;i<pos.size();i++){
            if(pos[i]%2==0) isposible=true;
            if(pos[i]==0 && s.size()%2) isposible=true;
            if(pos[i]==s.size()-1 && s.size()%2)isposible=true;
        }
        cout<<(isposible?"YES":"NO")<<endl;
    }
}
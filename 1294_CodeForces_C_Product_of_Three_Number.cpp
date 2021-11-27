#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
  int k,n;
  cin>>k;
  while(k--){
    int count=0;
    cin>>n;
    set<long long> nums;
    for(int i=2;i*i<=n;i++){
      if(n%i==0 && !nums.count(i)){
        nums.insert(i);
        n/=i;
        count++;
      }
      if(count==2) break;
    }
    if(nums.size()<2 || n==1 || nums.count(n)) cout<<"NO"<<endl;
    else{
      nums.insert(n);
      cout<<"YES"<<endl;
      for(auto num:nums) cout<<num<<" ";
      cout<<endl;
     }  
  }
  return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void prowls(int ind,vector<int> &snow,int a[],int n){
 if(ind == n){
     for(auto it: snow){
         cout<< it <<" ";
     }
     if(snow.size()==0){
         cout<<"{}";
     }
     cout<<endl;
     return;
 }
    snow.push_back(a[ind]);
    prowls(ind+1, snow , a ,n);
    snow.pop_back();
    prowls(ind+1, snow , a ,n);

    
}
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<int> snow;
prowls(0,snow,a,n);
  return 0;
}

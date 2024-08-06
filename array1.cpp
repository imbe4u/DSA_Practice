//1. Q - Program to find sum of elements in given array

#include <bits/stdc++.h>
using namespace std;
    int sum(vector<int> arr){
        int sum = 0;
        for(int i= 0; i <arr.size(); i++){
            sum += arr[i];
        }
        return sum;
    }
int main(){
    vector<int>arr;
    //int val,n;
    //cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>val;
    //     arr.push_back(val);
    // }
//^ it was statically by giving the size of array 

//it is done dynamically but for that we have to give -1 value to stop the loop
int val;
while(true){
  cin>>val;
    if(val == -1){
      break;
      }
         arr.push_back(val);
}
int ans=sum(arr);
cout<<ans;
}

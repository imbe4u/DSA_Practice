//Q. Program for Given an array A[] and a number x, check for pair in A[] with sum as x
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,size,val;
    cout<<"please enter the size of array ";
    cin>>size;
    cout<<"Please give the X "<<endl;
    cin>>x;
    vector<int> arr;
    for(int i=0;i<size;i++){
        cin>>val;
        arr.push_back(val);
    }
    int count=0;
    for(int i=0;i<size;i++){
        int ans=arr[i]+arr[i+1];
        if(ans==x){
            count++;
        }
    }
    cout<<count;

}
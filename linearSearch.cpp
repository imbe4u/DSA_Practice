//lenear search is the searching algo where we first search small element and then sort according to ascending order.

#include<iostream>
using namespace std;
void linear(int n, int *arr){
// 5 4 8 1 3
        
    for(int i=0;i<n-1;i++){
        int index=i;
        

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
            swap(arr[i],arr[index]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    linear(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
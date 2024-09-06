//we can assume binary search as the dictionary as we search in the dictionary like first we pick random page and check wether the target word will be in left or right
// just like that we check in binary search 


//binary search is the searching algorithm in which we seach for the given key
//for binary search the array should be shorted 
//binary search is the most efficient searching algorithm with time complexity of O(log n)
//in binary seach we first get the middle element and then check wether the key is greater than mid or not. if key is greater than will check element in the right side of the midle elemnet or if smaller thn check it in left side.

#include <iostream>
using namespace std;
int search(int *arr,int key,int left,int right){
    if(left<=right){
    int mid=(left+right)/2;

    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return search(arr,key,left,mid-1);
    }
    else if(arr[mid]<key){
        return search(arr,key,mid+1,right);
    }
}
return -1;
}
int main(){
    int n,key;
    cout<<"Enter the legth of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the digit"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        
    cout<<"Enter the digit which you want possition"<<endl;
    cin>>key;

    int left=0;
    int right=n-1;
    int a=search(arr,key,left,right);
    if(a==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at position "<<a+1<<endl;
    }

}
    
// 2. Q - Find largest element in array

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //10 20 55 13 90
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int max2=arr[0];
    for(int i=0;i<n;i++)//0,1.2,5
    {
        if(arr[i]>max)//20>10
        {
            max2=max;//10
            max=arr[i];//2
            //2
            //2
        }
        else if(arr[i]>max2){
            max2=arr[i];
        }
    }
    cout<<"the largest element is " <<max<<endl;
    cout<<"the 2d largest element is " <<max2<<endl;
}
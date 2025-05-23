#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }
    cout<<"Your Sorted Array Is: ";
    print(arr,n);
}

int main(){
 int arr[5]={5,3,7,4,1};
 int n=sizeof(arr)/sizeof(int);
 bubblesort(arr,n);   
 return 0;
}
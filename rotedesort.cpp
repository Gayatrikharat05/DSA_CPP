#include<iostream>
#include<vector>
using namespace std;
int search(int arr[],int si,int ei,int target){
if(si>ei){
    return -1;
}
int mid=si+(ei-si)/2;
if(target==arr[mid]){
    return mid;
}
if(arr[si]<=arr[mid]){
    if(arr[si]<=target && target<=arr[mid]){
        return search(arr,si,mid-1,target);
    }
    else{
        return search(arr,mid+1,ei,target);
    }
}
else{
    if(arr[mid]<=target && target<=arr[ei]){
       return search(arr,mid+1,ei,target); 
    }
    else{
        return search(arr,si,mid-1,target);
    }
}
}
int main(){
    int arr[7]={4,5,6,7,0,1,2};
    int n=7;
    int target;
    cout<<"Enter Your Target :";
    cin>>target;
    cout<<"Idx:"<<search(arr,0,n-1,target)<<endl;
    return 0;
    }



#include<iostream>
#include<climits>
using namespace std;
int slargest(int arr[],int n){
    int largest=arr[0];
    int seclargest=INT_MIN;
    for(int i=1;i<n;i++){
        if (arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }
else if(arr[i]!=largest && arr[i]>seclargest){
    seclargest=arr[i];
}
    }
    return seclargest;
}
int ssmallest(int arr[],int n){
    int smallest=arr[0];
    int secsmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            secsmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<secsmallest){
    secsmallest=arr[i];
    }
}
    return secsmallest;
}
int main(){
    int arr[6]={2,5,4,7,3,2};
    int n=6;
    cout<<"The second largest number in the array is: "<<slargest(arr,n);
    cout<<endl;
     cout<<"The second smallest number in the array is: "<<ssmallest(arr,n);
    return 0;
}
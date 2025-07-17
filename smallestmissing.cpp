#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

    int missingNumber(vector<int>&arr) {
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int num=1;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            num++;
        }
        else if(arr[i]<1){
            continue;
        }
        else if(arr[i]>num){
            break;
        }
    }
        return num;
    
    }
    
int main(){
   vector <int> arr={-2,3,1,5,4};
    cout<<"The smallest positive missing number in array is:"<<missingNumber(arr);
    return 0;
}
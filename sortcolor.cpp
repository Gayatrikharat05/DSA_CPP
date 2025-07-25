#include<iostream>
#include<vector>
using namespace std;
void numbersort(vector<int>&nums,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main(){
    vector<int>nums={2,1,2,0,1,0,0,1,2};
    int n=nums.size();
    numbersort(nums,n);
        for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

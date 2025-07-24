#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int longestsubarr(vector<int>nums,int k){
int left=0;
int right=0;
int maximum=0;
long long sum=0;
int n=nums.size();
while(right<n){
    sum+=nums[right];
    while(left<=right && sum>k){
        sum-=nums[left];
        left++;
    }
    if(sum==k){
        maximum=max(maximum,right-left+1);
    }
    right++;
}
return maximum;

}

int main(){
    
    vector<int>nums={3,2,1,1,1,1,4};
    int k=6;
   cout<<"The length of the longest subarray is: "<< longestsubarr(nums,k);
    return 0;
}
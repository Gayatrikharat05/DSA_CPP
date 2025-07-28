#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>superiorelements(vector<int>&nums){
    vector<int>ans;
    int n=nums.size();
    int maxi=INT8_MIN;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
            maxi = nums[i];  
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>nums={16,5,8,4,1,2};
   vector<int>result= superiorelements(nums);
    cout<<"Superior elements are:";
   for(int val:result){
  cout<<val<<" ";
   }
    return 0;
}
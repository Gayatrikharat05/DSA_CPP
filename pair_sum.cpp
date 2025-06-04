#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int> arr,int target){
vector<int>ans;
  int currsum=0;
  int st=0,end=arr.size()-1;
  while(st<end){
    currsum=arr[st]+arr[end];
    if(currsum==target){
        ans.push_back(st);
         ans.push_back(end);
         return ans;
    }
    else if(currsum<target){
        st++;
    }
    else{
        end--;
    }
  }  
return ans;

}
int main(){

    vector<int> vec={1,2,3,4,5};
    int target=9;
    vector<int>ans=pairsum(vec,target);
  if (!ans.empty()) { 
        cout << "(" << ans[0] << "," << ans[1] << ")" << endl;
    } else {
        cout << "No pair found that sums to " << target << endl;
    }
    return 0;
}  


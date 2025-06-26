#include<iostream>
#include<vector>
using namespace std;

int lastoccur(vector<int>arr,int i,int target){
    if(i==arr.size()){
        return -1;
    }
    int ans=lastoccur(arr,i+1,target);

    if(ans!=-1){
        return ans;
    }
    if(arr[i]==target)
{
    return i;
}

return -1;
}

int main(){
    vector<int>arr={3,2,5,6,6,7,6,8,9,9};
   cout<<lastoccur(arr,0,9);
    return 0;
}